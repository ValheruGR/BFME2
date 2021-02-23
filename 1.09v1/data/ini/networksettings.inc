; ; networksettings.inc
;
; Original network settings. This file is the same-old that EA gave us.
;
; -Forlong

  FramesPerSecondLimit = 30

  ; Network timing settings.  Don't mess with these unless you know what you're doing!
  ; If you are tempted to mess with these, please let me know. 
  ; This does not imply that I know what I'm doing.
  NetworkFPSHistoryLength = 30      ; The number of fps history entries.
  NetworkLatencyHistoryLength = 200 ; The number of ping history entries.
  NetworkRunAheadMetricsTime = 5000 ; The number of miliseconds between run ahead metrics things
  NetworkCushionHistoryLength = 10  ; The number of cushion values to keep.
  NetworkRunAheadSlack = 10         ; The amount of slack in the run ahead value.  This is the percentage of the calculated run ahead that is added.
  NetworkKeepAliveDelay = 20        ; The number of seconds between when the connections to each player send a keep-alive packet.
  NetworkDisconnectTime = 15000      ; The number of milliseconds between when the game gets stuck on a frame for a network stall and when the disconnect dialog comes up.
  NetworkPlayerTimeoutTime = 60000  ; The number of milliseconds between when a player's last keep alive command was recieved and when they are considered disconnected from the game.
  NetworkDisconnectScreenNotifyTime = 15000 ; The number of milliseconds between when the disconnect screen comes up and when the disconnect notification is sent to the other players.
