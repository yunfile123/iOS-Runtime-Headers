/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVErrorResolver, NSNotification, MPAudioDeviceController, NSMutableArray, MPQueueFeeder, AVController, MPAVControllerToAggregateDCommunicator, CALayer, MPAVDestinationBrowser, <MPAVDestination>;



@interface MPAVController : NSObject 
{
    AVController *_avController;
    double _connectionFailTime;
    unsigned int _valid : 1;
    NSInteger _playbackMode;
    MPAudioDeviceController *_audioDeviceController;
    MPQueueFeeder *_feeder;
    MPAVErrorResolver *_itemErrorResolver;
    CALayer *_videoLayer;
    NSUInteger _videoLayerUsageCount;
    NSUInteger _tickTimerEnabled;
    struct __CFRunLoopTimer { } *_tickTimer;
    double _tickInterval;
    struct __CFRunLoopTimer { } *_currentItemBookkeepingTimer;
    NSInteger _indexChangeDirection;
    NSUInteger _itemIndexAtDeath;
    NSInteger _lastDisconnectReason;
    double _lastKnownTimeBeforeDeath;
    double _lastPlaybackIndexChangeTime;
    double _lastSetTime;
    double _lastSetTimeChangeTime;
    unsigned int _hasDelayedCurrentTimeToSet : 1;
    unsigned int _forceDelayedCurrentTimeToSet : 1;
    double _delayedCurrentTimeToSet;
    NSInteger _delayedCurrentTimeOptions;
    NSUInteger _lastSetTimeMarker;
    unsigned int _autoPlayWhenLikelyToKeepUp : 1;
    unsigned int _closedCaptioningEnabled : 1;
    NSInteger _eqPreset;
    double _nextFadeOutDuration;
    double _repeatGap;
    float _rateBeforeSeek;
    float _inflightSeekRate;
    NSUInteger _scanLevel;
    NSInteger _scanDirection;
    NSInteger _resetRateAfterSeekingUpdateDisabled;
    NSUInteger _seeklessState;
    unsigned int _isSeekingOrScrubbing : 1;
    unsigned int _resetRateAfterSeeking : 1;
    unsigned int _activeRewindHoldingAtStart : 1;
    double _lastSeekableEnd;
    double _whenSawSeekableEnd;
    double _maxSeekableFwd;
    double _seekFwdSlop;
    double _lastSeekableStart;
    double _whenSawSeekableStart;
    double _maxSeekableRev;
    double _seekRevSlop;
    unsigned int _canSeekRev : 1;
    unsigned int _canSeekFwd : 1;
    unsigned int _alwaysPlayWheneverPossible : 1;
    unsigned int _stopAtEnd : 1;
    unsigned int _didReachEnd : 1;
    unsigned int _pausedDuringInterruption : 1;
    unsigned int _useApplicationAudioSession : 1;
    unsigned int _subtitlesEnabled : 1;
    unsigned int _videoFrameDisplayOnResumeDisabled : 1;
    id _subtitlesRecipient;
    NSUInteger _state;
    NSUInteger _displayOverridePlaybackState;
    NSUInteger _bufferingState;
    NSNotification *_delayedPlaybackStateNotification;
    NSMutableArray *_queueFeederStateStack;
    NSInteger _feederMode;
    MPAVControllerToAggregateDCommunicator *_aggregateDCommunicator;
    MPAVDestinationBrowser *_destinationBrowser;
    <MPAVDestination> *_destination;
    unsigned int _destinationInterrupted : 1;
    unsigned int _ignoreNextDestinationInterruption : 1;
}

@property BOOL autoPlayWhenLikelyToKeepUp;
@property BOOL closedCaptioningEnabled;
@property NSUInteger repeatType;
@property(getter=isShuffled,readonly) BOOL shuffled;
@property NSUInteger shuffleType;
@property(readonly) BOOL hasVolumeControl;
@property float volume;
@property(readonly) BOOL muted;
@property(readonly) NSString *routeNameForVolumeControl;
@property(readonly) NSUInteger activeRepeatType;
@property(readonly) NSUInteger activeShuffleType;
@property(retain,readonly) MPAVItem *currentItem;
@property double currentTime;
@property(readonly) NSUInteger numberOfItems;
@property(getter=isPlaying,readonly) BOOL playing;
@property(getter=isRewindHoldingAtStart,readonly) BOOL rewindHoldingAtStart;
@property BOOL subtitlesEnabled;
@property(getter=isValid,readonly) BOOL valid;
@property BOOL alwaysPlayWheneverPossible;
@property(getter=isFullScreenVideoMode,readonly) BOOL fullScreenVideoMode;
@property NSInteger playbackMode;
@property BOOL stopAtEnd;
@property BOOL useApplicationAudioSession;
@property(readonly) <MPAVDestination> *bestDestination;
@property(readonly) BOOL isCurrentItemReady;
@property(retain,readonly) AVController *avController;
@property(readonly) BOOL handlingRemoteEvent;
@property(getter=destinationIsTVOut) BOOL destinationIsTVOut; /* unknown property attribute: SsetDestinationIsTVOut: */
@property BOOL videoFrameDisplayOnResumeDisabled;
@property(readonly) BOOL currentItemIsRental;
@property(retain,readonly) CALayer *videoLayer;
@property(retain,readonly) id subtitlesRecipient;
@property NSUInteger state;
@property double repeatGap;
@property double nextFadeOutDuration;
@property NSInteger feederMode;
@property(retain) MPQueueFeeder *feeder;
@property NSInteger EQPreset;
@property(readonly) MPAVDestinationBrowser *destinationBrowser;
@property(retain) <MPAVDestination> *destination;
@property(readonly) NSUInteger bufferingState;
@property(retain,readonly) MPAudioDeviceController *audioDeviceController;

+ (id)sharedInstance;
+ (void)purgeSharedInstance;
+ (id)sharedIPCAppInstanceIfAvailable;
+ (id)sharedIPCAppInstance;

- (BOOL)setRate:(float)arg1;
- (void)_updateProgress:(struct __CFRunLoopTimer { }*)arg1;
- (void)play;
- (void)_setState:(NSUInteger)arg1;
- (id)videoLayer;
- (void)setDestination:(id)arg1;
- (id)destination;
- (id)currentItem;
- (NSUInteger)numberOfItems;
- (BOOL)isValid;
- (void)setState:(NSUInteger)arg1;
- (NSUInteger)state;
- (id)init;
- (void)applicationWillTerminate;
- (void)dealloc;
- (void)_updateCurrentTimeToNextStartTimeForQueueFeeder:(id)arg1 withItemIndex:(NSInteger)arg2;
- (void)_setAVControllerQueueFeeder:(id)arg1 startQueueIndex:(NSUInteger)arg2;
- (BOOL)fadeOutForQuit;
- (BOOL)isSeekingOrScrubbing;
- (BOOL)isRewindHoldingAtStart;
- (void)pauseWithFadeout:(float)arg1;
- (void)playItemAtIndex:(NSUInteger)arg1;
- (void)playItemAtIndex:(NSUInteger)arg1 forceRestart:(BOOL)arg2;
- (void)playChapterTimeMarkerAtIndex:(NSUInteger)arg1;
- (BOOL)forceRestartPlaybackIfNecessary;
- (void)disconnectVideoLayer;
- (void)beginTickTimerWithInterval:(double)arg1;
- (void)endTickTimer;
- (BOOL)isTickTimerEnabled;
- (NSUInteger)activeRepeatType;
- (NSUInteger)activeShuffleType;
- (BOOL)autoPlayWhenLikelyToKeepUp;
- (BOOL)closedCaptioningEnabled;
- (BOOL)handlingRemoteEvent;
- (BOOL)_showsPlayingWhenInState:(NSUInteger)arg1;
- (NSUInteger)_seeklessStateForState:(NSUInteger)arg1;
- (BOOL)shouldDisplayAsPlaying;
- (BOOL)isShuffled;
- (BOOL)alwaysPlayWheneverPossible;
- (void)setClosedCaptioningEnabled:(BOOL)arg1;
- (void)setEQPreset:(NSInteger)arg1;
- (void)setRepeatGap:(double)arg1;
- (BOOL)hasVolumeControl;
- (id)routeNameForVolumeControl;
- (BOOL)isFullScreenVideoMode;
- (BOOL)stopAtEnd;
- (id)bestDestination;
- (void)applicationDidReceiveMemoryWarningAsUrgent:(BOOL)arg1;
- (void)applyRepeatSettings;
- (void)applyShuffleSettings;
- (BOOL)currentItemIsRental;
- (void)prepareVideoLayerForReuse;
- (id)subtitlesRecipient;
- (void)switchToAudioPlayback:(BOOL)arg1;
- (void)switchToVideoPlayback:(BOOL)arg1;
- (BOOL)destinationIsTVOut;
- (void)saveCurrentFeederState;
- (void)restorePreviousFeederState;
- (void)ensureFeederIsSubclass:(Class)arg1;
- (void)updateBookkeepingNow;
- (BOOL)shouldHaveNoActionAtEndForState:(NSUInteger)arg1;
- (BOOL)shouldRouteAudioToDeviceForCurrentItem;
- (BOOL)isLiveStreaming;
- (BOOL)canSeekBackwards;
- (BOOL)canSeekForwards;
- (void)skipToSeekableStart;
- (void)skipToSeekableEnd;
- (void)_coalesceAndPostMPTimeMarkerCrossedNotification;
- (void)insertAndPostEmbeddedTimeMarkerWithNotification:(id)arg1;
- (void)_crossedEmbeddedChapterNameDidChangeNotification:(id)arg1;
- (void)_crossedEmbeddedChapterHREFDidChangeNotification:(id)arg1;
- (void)_crossedEmbeddedChapterImageDidChangeNotification:(id)arg1;
- (void)controller:(id)arg1 crossedTimeMarker:(NSInteger)arg2 forItem:(id)arg3 context:(id)arg4;
- (BOOL)controller:(id)arg1 shouldBeginPlayingItem:(id)arg2 error:(id*)arg3;
- (void)errorResolver:(id)arg1 didResolveError:(id)arg2 withResolution:(NSInteger)arg3;
- (void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)arg1;
- (void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)arg1;
- (void)_availableDestinationsDidChangeNotification:(id)arg1;
- (void)_destinationPlaybackStateDidChangeNotification:(id)arg1;
- (void)_firstVideoFrameDisplayedNotification:(id)arg1;
- (void)_itemTimeMarkersAvailableNotification:(id)arg1;
- (void)_itemTypeAvailableNotification:(id)arg1;
- (void)_itemCompletedDecodeNotification:(id)arg1;
- (void)_itemFailedToPlayNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_playbackInterruptedNotification:(id)arg1;
- (void)_playbackInterruptionDidEndNotification:(id)arg1;
- (void)_updateCurrentItemBookkeeping;
- (void)_disconnectAVControllerWithReason:(NSInteger)arg1;
- (void)_serverConnectionDiedNotification:(id)arg1;
- (void)_sizeDidChangeNotification:(id)arg1;
- (void)_streamBufferFullNotification:(id)arg1;
- (void)_streamLikelyToKeepUpNotification:(id)arg1;
- (void)_streamRanDryNotification:(id)arg1;
- (void)_streamUnlikelyToKeepUpNotification:(id)arg1;
- (void)_systemVolumeDidChangeNotification:(id)arg1;
- (void)_timeHasJumpedNotification:(id)arg1;
- (void)_volumeMutedDidChangeNotification:(id)arg1;
- (void)_resumedEventsOnly:(BOOL)arg1;
- (void)_resumedEventsOnlyNotification:(id)arg1;
- (void)_resumedNotification:(id)arg1;
- (void)_suspendedEventsOnlyNotification:(id)arg1;
- (void)_suspendedNotification:(id)arg1;
- (void)_delayedPlaybackIndexChange;
- (void)_delayedUpdateScanningRate;
- (void)_delayedUpdateTimeMarker;
- (BOOL)_changeChapterTimeMarkerIndexBy:(NSInteger)arg1;
- (void)_configureAVController:(id)arg1;
- (BOOL)_connectAVController;
- (void)_endSeekAndChangeRate:(BOOL)arg1;
- (NSUInteger)_playbackIndexForDelta:(NSInteger)arg1 fromIndex:(NSUInteger)arg2 ignoreElapsedTime:(BOOL)arg3;
- (void)_prepareToPlayItem:(id)arg1;
- (id)embeddedDataTimesForItem:(id)arg1;
- (void)_reloadTimeMarkerObservationsForItem:(id)arg1;
- (void)_registerForAVItemNotifications:(id)arg1;
- (void)_registerForAVNotifications:(id)arg1;
- (void)_registerForAVSystemNotifications:(id)arg1;
- (void)_resetInternalState;
- (void)_resetQueue:(BOOL)arg1 videoLayer:(id)arg2;
- (void)_attemptAutoPlay;
- (void)_setBufferingState:(NSUInteger)arg1;
- (void)_setActionAtEndAttributeForState:(NSUInteger)arg1;
- (void)_delayedPostPlaybackStateChangedNotification;
- (void)_postPlaybackStateChangedNotificationWithOriginalState:(NSUInteger)arg1 newState:(NSUInteger)arg2 delayable:(BOOL)arg3;
- (void)autoclearDisplayOverride;
- (NSUInteger)_displayPlaybackState;
- (void)_scheduleUpdateCurrentItemBookkeepingTimer;
- (void)_cancelUpdateCurrentItemBookkeepingTimer;
- (void)_configureUpdateCurrentItemBookkeepingTimer;
- (void)_clearResetRateAfterSeeking;
- (void)_setItemErrorResolver:(id)arg1;
- (void)_setVideoLayerOnAVController:(id)arg1 force:(BOOL)arg2;
- (BOOL)_wantsVideoLayerWhenSuspended;
- (void)_setValid:(BOOL)arg1;
- (void)_unregisterForAVItemNotifications:(id)arg1;
- (void)_unregisterForAVNotifications:(id)arg1;
- (void)_unregisterForAVSystemNotifications:(id)arg1;
- (void)setRateForScanning:(float)arg1;
- (void)_updateScanningRate;
- (void)_delayedSetCurrentTime;
- (void)_updateSeekingIntervalsForStreaming;
- (void)_clearSeekingIntervalsForStreaming;
- (id)_metadataDictionariesFromMetadataPayload:(id)arg1;
- (id)_extractImageFromMetadataPayload:(id)arg1;
- (void)_pauseTickTimer;
- (void)_resumeTickTimer;
- (void)_playbackFailedWithError:(id)arg1 canResolve:(BOOL)arg2;
- (void)_routeAudioToDeviceIfNecessary;
- (void)_beginDestinationInterruption;
- (void)_endDestinationInterruption;
- (double)repeatGap;
- (double)nextFadeOutDuration;
- (NSInteger)feederMode;
- (NSInteger)EQPreset;
- (id)destinationBrowser;
- (void)setAutoclearingDisplayOverridePlaybackState:(NSUInteger)arg1;
- (void)feederChangedContents:(id)arg1;
- (void)ensureFeederIsClass:(Class)arg1;
- (NSUInteger)shuffleType;
- (void)setShuffleType:(NSUInteger)arg1;
- (NSUInteger)repeatType;
- (void)setRepeatType:(NSUInteger)arg1;
- (id)_avController;
- (void)_clearVideoLayer;
- (void)_itemAttributeAvailableNotification:(id)arg1;
- (BOOL)subtitlesEnabled;
- (void)setSubtitlesEnabled:(BOOL)arg1;
- (double)timeOfPlayableStart;
- (double)timeOfPlayableEnd;
- (void)setDestinationIsTVOut:(BOOL)arg1;
- (BOOL)muted;
- (BOOL)videoFrameDisplayOnResumeDisabled;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_volumeDidChangeNotification:(id)arg1;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (NSUInteger)bufferingState;
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
- (BOOL)isCurrentItemReady;
- (void)endPlayback;
- (void)setDisplayOverridePlaybackState:(NSUInteger)arg1;
- (void)beginSeek:(NSInteger)arg1;
- (void)endSeek;
- (void)changePlaybackIndexBy:(NSInteger)arg1 deltaType:(NSInteger)arg2;
- (void)changePlaybackIndexBy:(NSInteger)arg1 deltaType:(NSInteger)arg2 ignoreElapsedTime:(BOOL)arg3;
- (NSInteger)playbackMode;
- (void)setPlaybackMode:(NSInteger)arg1;
- (void)beginUsingVideoLayer;
- (void)endUsingVideoLayer;
- (id)feeder;
- (void)changePlaybackIndexBy:(NSInteger)arg1;
- (void)setPlaybackIndex:(NSInteger)arg1;
- (void)setFeeder:(id)arg1;
- (void)setFeederMode:(NSInteger)arg1;
- (void)reloadFeederWithStartQueueIndex:(NSUInteger)arg1;
- (void)setNextFadeOutDuration:(double)arg1;
- (void)ensureHasAVController;
- (void)togglePlayback;
- (BOOL)useApplicationAudioSession;
- (void)setUseApplicationAudioSession:(BOOL)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_itemReadyToPlayNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_timedMetadataAvailableNotification:(id)arg1;
- (void)setCurrentTime:(double)arg1 options:(NSInteger)arg2;
- (id)audioDeviceController;
- (void)pause;
- (float)volume;
- (void)setVolume:(float)arg1;
- (void)setVideoFrameDisplayOnResumeDisabled:(BOOL)arg1;
- (id)avController;
- (float)rate;
- (void)setAlwaysPlayWheneverPossible:(BOOL)arg1;
- (void)setStopAtEnd:(BOOL)arg1;
- (double)currentTime;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (BOOL)isPlaying;
- (void)setCurrentTime:(double)arg1;

@end