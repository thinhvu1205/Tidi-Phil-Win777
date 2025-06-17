using Newtonsoft.Json.Linq;

public class HandleBaucua
{
    public static void processData(JObject jData) // class nay dung de viet them cac evt rieng cua game binh a nhe. Con may cai chung nhu stable,ctable o ben handleGame co r/
    {
        var gameView = (BaucuaGameView)UIManager.instance.gameView;
        if (gameView == null) return;
        string evt = (string)jData["evt"];
        switch (evt)
        {
            case "startgame":
                gameView.handleStart((string)jData["data"]);
                break;
            case "ctable":
                gameView.handleCTable((string)jData["data"]);
                break;
            case "stable":
                gameView.handleSTable((string)jData["data"]);
                break;
            case "jtable":
                   gameView.handleJTable((string)jData["data"]);
                break;
            case "rjtable":
                //    gameView.handleRJTable(data.data);
                break;
            case "cctable":
                //    gameView.handleCCTable(data);
                break;
            case "ltable":
                    gameView.handleLTable(jData);
                break;
            case "rtable":
                //    gameView.handleRTable(data);
                break;
            case "chattable":
                //    gameView.handleChatTable(data);
                break;
            case "bet":
                gameView.handleBetGame(jData);
                break;
            case "unbet":   //Khong dung
                            // gameView.handleUnBet(data);
                break;
            case "finish":
                 gameView.handleFinish(jData);
                break;
            case "history":
                 gameView.handleHistory(jData);
                break;
            case "am":
                //gameView.handleAM(data);
                break;
            case "tip":   //Khong dung
                          // gameView.handleTip(data);
                break;
        }
    }
}