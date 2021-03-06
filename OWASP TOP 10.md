## OWASP TOP 10 2007


>* 1. Cross Site Scripting（XSS）：當應用程式未將使用者提供的資料先審核或進行內容編碼，就直接將資料傳輸到網路瀏覽器，即可能發生XSS問題。XSS能讓攻擊者直接在受害者的網路瀏覽器上執行Script，攻擊者便可以hijack user sessions、或竄改網站內容等。


>* 2. Injection Flaws ：在網路應用程式，SQL Injection裡很常見。Injection之所以會發生，是因為使用者提供的資料傳輸到一個interpreter，此被當成指令（Command）或是查詢（Query）。攻擊者就能用惡意的資料欺騙interpreter，而達到執行指令或是竄改資料的目的。


>* 3. Insecure Remote File Include：有弱點的程式碼讓攻擊者可附加惡意程式及資料，甚至導致毀滅性的攻擊，例如整個伺服器被入侵。


>* 4. Insecure Direct Object Reference：Direct object reference發生的原因是因為開發者暴露了reference to an internal implementation object，像是檔案、檔案夾、或資料庫的record，或是key，來作為URL或是Form的參數。攻擊者可藉由操作這些references擅自進入其他objects中。


>* 5. Cross Site Request Forgery（CSRF）：CSRF攻擊強迫受害者登入的瀏覽器傳輸pre-authenticated request 給有弱點的網路應用程式，接著強迫受害者瀏覽器執行對攻擊者有好處的的行為。


>* 6. Information Leakage and Improper Error Handling：應用程式可能洩漏關於程式的configuration訊息，程式內部的運轉模式，或者透過多種應用問題違犯隱私。攻擊者利用這個程式弱點侵犯隱私，或者更進一步的攻擊。


>* 7. Broken Authentication and Session Management：Account credentials和session tokens 因經常沒有受到正確及嚴密的保護。而被攻擊者使用密碼、或keys，或是authenticationtokens來冒用其他使用者的身份。


>* 8. Insecure Cryptographic Storage：網路應用程式很少正常使用cryptographic functions來保護資料，使得攻擊者有機可乘並冒用其他使用者身份，進行其他犯罪行為，如盜刷信用卡等。


>* 9. Insecure Communications：保護敏感的通訊資料是必要的，但應用程式卻經常忽略以「加密」方式來保護網路通訊。


>* 10. Failure to Restrict URL Access：應用程式敏感地區是被保護的Links或是URLs，而這些是不會提供給未被授權的使用者。這也容易讓攻擊者利用這項弱點進入，並進行未被授權的行為。



## OWASP TOP 10 2010


>* A1 – Injection（注入攻擊） 
防護建議：
使用Prepared Statements，例如Java PreparedStatement()，.NET SqlCommand(), OleDbCommand()，PHP PDO bindParam()
使用Stored Procedures
嚴密的檢查所有輸入值
使用過濾字串函數過濾非法的字元，例如mysql_real_escape_string、addslashes
控管錯誤訊息只有管理者可以閱讀
控管資料庫及網站使用者帳號權限為何

>* A2 – Cross Site Scripting (XSS)（跨站腳本攻擊） 
防護建議：
檢查頁面輸入數值
輸出頁面做Encoding檢查
使用白名單機制過濾，而不單只是黑名單
PHP使用htmlentities過濾字串
.NET使用Microsoft Anti-XSS Library
OWASP Cross Site Scripting Prevention Cheat Sheet
各種XSS攻擊的Pattern參考 

>* A3 – Broken Authentication and Session Management（身分驗證功能缺失） 
防護建議：
使用完善的COOKIE / SESSION保護機制
不允許外部SESSION
登入及修改資訊頁面使用SSL加密
設定完善的Timeout機制
驗證密碼強度及密碼更換機制 

>* A4 – Insecure Direct Object References（不安全的物件參考）
防護建議：
避免將私密物件直接暴露給使用者
驗證所有物件是否為正確物件
使用Index / Hash等方法，而非直接讀取檔案

>* A5 – Cross Site Request Forgery (CSRF)（跨站冒名請求） 
防護建議：
確保網站內沒有任何可供XSS攻擊的弱點
在Input欄位加上亂數產生的驗證編碼
在能使用高權限的頁面，重新驗證使用者
禁止使用GET參數傳遞防止快速散佈
使用Captcha等技術驗證是否為人為操作 

>* A6 – Security Misconfiguration（安全性設定疏失） 
防護建議：
軟體、作業系統是否都有更新到最新版本？是否都有上最新Patch?
不需要的帳號、頁面、服務、連接埠是否都有關閉？
預設密碼是否都有更改？
安全設定是否都完備？
伺服器是否都有經過防火牆等設備保護？

>* A7 – Failure to Restrict URL Access（限制URL存取失敗）
HTTP Service直接限制來源IP
使用防火牆阻擋
密碼授權加密頁面
網站架構最佳化

>* A8 – Unvalidated Redirects and Forwards（未驗證的導向）
非必要時避免使用Redirect及Forward
驗證導向位置及存取資源是合法的

>* A9 – Insecure Cryptographic Storage（未加密的儲存設備）
使用現有公認安全的加密演算法
減少使用已有弱點的演算法，例如MD5 / SHA-1，甚至更簡單的加密法
安全的保存私鑰

>* A10 – Insufficient Transport Layer Protection（傳輸層保護不足）
防護建議：
盡可能的使用加密連線
Cookie使用Secure Flag
確認加密憑證是有效並符合domain的
後端連線也使用加密通道傳輸
http://www.owasp.org/index.php/Transport_Layer_Protection_Cheat_Sheet 
