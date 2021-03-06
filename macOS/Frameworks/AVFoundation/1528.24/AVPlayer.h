//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlayerInternal, NSArray, NSError, NSString;

@interface AVPlayer : NSObject
{
    AVPlayerInternal *_player;
}

+ (long long)availableHDRModes;
+ (BOOL)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+ (BOOL)automaticallyNotifiesObserversOfExternalPlaybackActive;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;
+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingVolume;
+ (BOOL)automaticallyNotifiesObserversOfUsesLegacyAutomaticWaitingBehavior;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (int)_createFigPlayerWithType:(long long)arg1 player:(struct OpaqueFigPlayer **)arg2;
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;
+ (id)playerWithFigPlayer:(struct OpaqueFigPlayer *)arg1;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;
+ (long long)propertyStorageCachePolicy;
+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;
- (BOOL)_allowsVideoPlaybackWhileInBackground;
- (BOOL)_isVideoPlaybackAllowedWhileInBackground;
- (void)_setAllowsVideoPlaybackWhileInBackground:(BOOL)arg1;
- (BOOL)_limitsBandwidthForCellularAccess;
- (void)_setLimitsBandwidthForCellularAccess:(BOOL)arg1;
- (BOOL)_dynamicallyChoosesInitialVariant;
- (void)_setDynamicallyChoosesInitialVariant:(BOOL)arg1;
- (void)_logPerformanceDataForCurrentItem;
- (id)_copyPerformanceDataForCurrentItem;
- (void)_logPerformanceDataForPreviousItem;
- (BOOL)_shouldLogPerformanceData;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem *)arg1;
- (void)_removeFPListeners;
- (void)_addFPListeners;
- (id)_fpNotificationNames;
- (void)_setNeroVideoGravityOnFigPlayer;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (id)externalPlaybackVideoGravity;
- (void)_pixelBufferAttributesDidChangeForLayer:(id)arg1;
- (void)_addLayer:(id)arg1;
- (void)_removeLayer:(id)arg1;
- (void)_detachClosedCaptionLayersFromFigPlayer:(struct OpaqueFigPlayer *)arg1;
- (void)_attachClosedCaptionLayersToFigPlayer;
- (void)_detachVideoLayersFromFigPlayer:(struct OpaqueFigPlayer *)arg1;
- (void)_attachVideoLayersToFigPlayer;
- (void)_detachFigPlayerFromSubtitleLayers;
- (void)_attachFigPlayerToSubtitleLayers;
- (void)_evaluateDisplaySizeOfAllAttachedLayers;
- (struct CGSize)_maximumAVPlayerLayerDisplaySize;
- (void)_updateClosedCaptionLayerBounds:(id)arg1;
- (id)_avPlayerLayers;
- (id)_videoLayers;
- (id)_closedCaptionLayers;
- (id)_subtitleLayers;
- (id)_pixelBufferAttributeMediator;
- (void)_removeAllLayers;
- (void)removeTimeObserver:(id)arg1;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)pause;
- (void)play;
- (void)setOutputContext:(id)arg1;
- (id)outputContext;
- (void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1;
- (BOOL)usesAudioOnlyModeForExternalPlayback;
- (BOOL)_usesAudioOnlyModeForExternalPlayback;
- (long long)externalPlaybackType;
- (BOOL)isExternalPlaybackActive;
- (BOOL)_externalPlaybackActive;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (BOOL)allowsExternalPlayback;
- (BOOL)_allowsExternalPlayback;
- (void)setPlayerRole:(id)arg1;
- (void)setShouldReduceResourceUsage:(BOOL)arg1;
- (id)playerRole;
- (BOOL)shouldReduceResourceUsage;
- (BOOL)isDisplayingClosedCaptions;
- (BOOL)_isDisplayingClosedCaptions;
- (void)setClosedCaptionDisplayEnabled:(BOOL)arg1;
- (BOOL)isClosedCaptionDisplayEnabled;
- (BOOL)_isClosedCaptionDisplayEnabled;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)_setActionAtItemEnd:(long long)arg1 allowingAdvance:(BOOL)arg2;
- (long long)actionAtItemEnd;
- (long long)_actionAtItemEnd;
- (long long)_defaultActionAtItemEnd;
- (void)setMuted:(BOOL)arg1;
- (BOOL)isMuted;
- (BOOL)_isMuted;
- (void)setVolume:(float)arg1;
- (float)volume;
- (float)_playerVolume;
- (void)setMasterClock:(struct OpaqueCMClock *)arg1;
- (struct OpaqueCMClock *)masterClock;
- (void)prerollOperationDidComplete:(BOOL)arg1 notificationPayload:(struct __CFDictionary *)arg2;
- (void)cancelPendingPrerolls;
- (void)prerollAtRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_unregisterAndReturnRetainedPrerollCompletionHandler;
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(CDUnknownBlockType)arg1;
- (int)_createPrerollID;
- (void)setRate:(float)arg1 time:(CDStruct_1b6d18a9)arg2 atHostTime:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)seekToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToDate:(id)arg1;
- (CDStruct_1b6d18a9)currentTime;
- (BOOL)_usesLegacyAutomaticWaitingBehavior;
- (void)_setUsesLegacyAutomaticWaitingBehavior:(BOOL)arg1;
- (void)setAutomaticallyWaitsToMinimizeStalling:(BOOL)arg1;
- (BOOL)automaticallyWaitsToMinimizeStalling;
- (id)reasonForWaitingToPlay;
- (id)_reasonForWaitingToPlay;
- (long long)timeControlStatus;
- (long long)_timeControlStatus;
- (long long)_timeControlStatusAndWaitingReason:(id *)arg1;
- (long long)_inferredTimeControlStatusAndWaitingReason:(id *)arg1 forRate:(float)arg2;
- (long long)_timeControlStatusAndWaitingReason:(id *)arg1 forPlaybackState:(int)arg2;
- (void)playImmediatelyAtRate:(float)arg1;
- (void)setRate:(float)arg1;
- (void)setRate:(float)arg1 withVolumeRampDuration:(CDStruct_1b6d18a9)arg2;
- (void)setRate:(float)arg1 withVolumeRampDuration:(CDStruct_1b6d18a9)arg2 playImmediately:(BOOL)arg3 rateChangeReason:(int)arg4;
- (float)rate;
- (float)_rate;
- (void)_removeAllItems;
- (id)_items;
- (id)_items_invokeOnIvarAccessQueue;
- (void)_enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)_removeItem:(id)arg1;
- (void)_removeItemFromLinkedList_invokeOnIvarAccessQueue:(id)arg1;
- (void)_enqueuePlayQueueModification_invokeOnIvarAccessQueue:(id)arg1;
- (void)_applyPlayQueueChangesToFigPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_applyLinkedListOfItemsToFigPlayerUsingBlock:(CDUnknownBlockType)arg1;
- (void)_addItemToLinkedList_invokeOnIvarAccessQueue:(id)arg1 afterItem:(id)arg2;
- (id)_ancillaryPerformanceInformationForDisplay;
- (void)_setAncillaryPerformanceInformationForDisplay:(id)arg1;
- (void)setExpectedAssetTypes:(id)arg1;
- (id)expectedAssetTypes;
- (void)_plumbRoutingContextFromAbove;
- (void)_createAndConfigureFigPlayerWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setPendingFigPlayerProperty:(id)arg1 forKey:(id)arg2;
- (id)_pendingFigPlayerPropertyForKey:(id)arg1;
- (id)_pendingFigPlayerProperties;
- (void)_insertItem:(id)arg1 afterItem:(id)arg2;
- (void)prepareItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_advanceToNextItem;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1;
- (void)_stopObservingPropertiesOfCurrentItem:(id)arg1;
- (void)_startObservingPropertiesOfCurrentItem:(id)arg1;
- (void)_noteNewNonForcedSubtitleDisplayEnabledForPlayerItem:(id)arg1;
- (BOOL)_cachedNonForcedSubtitleDisplayEnabledForCurrentItem;
- (void)_noteNewPresentationSizeForPlayerItem:(id)arg1;
- (struct CGSize)_cachedPresentationSizeOfCurrentItem;
- (void)_runOnIvarAccessQueueOperationThatMayChangeCurrentItemWithPreflightBlock:(CDUnknownBlockType)arg1 modificationBlock:(CDUnknownBlockType)arg2;
- (void)_updateProxyTimebaseFromNewCurrentItem;
- (id)_synchronizeWithNewCurrentItem;
- (void)_setCurrentItem:(id)arg1;
- (void)_updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression;
- (id)currentItem;
- (void)_updateDecoderPixelBufferAttributes:(id)arg1 onFigPlayer:(struct OpaqueFigPlayer *)arg2;
- (void)_changeStatusToFailedWithError:(id)arg1;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)valueForKeyForKVO:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (BOOL)_isChangingValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (void)_didChangeValueForTimeControlStatusAndReason;
- (void)_willChangeValueForTimeControlStatusAndReason;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_willAccessKVOForKey:(id)arg1;
- (void)_setCachedValue:(id)arg1 forKey:(id)arg2;
- (id)_cachedValueForKey:(id)arg1;
- (id)_propertyStorage;
- (struct OpaqueFigPlayer *)_copyFigPlayer;
- (id)_stateDispatchQueue;
- (id)dispatchQueue;
- (id)_weakReference;
- (void)finalize;
- (void)dealloc;
- (id)initWithFigPlayer:(struct OpaqueFigPlayer *)arg1;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (BOOL)outputObscuredDueToInsufficientExternalProtection;
- (BOOL)_outputObscuredDueToInsufficientExternalProtection;
- (long long)_extractFPExternalProtectionStatus:(id)arg1;
@property(readonly, nonatomic) long long _externalProtectionStatus;
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;
- (id)_playbackDisplaysForFigPlayer;
@property(nonatomic) float maxRateForAudioPlayback;
@property(nonatomic) float minRateForAudioPlayback;
@property(readonly, nonatomic, getter=isAudioPlaybackEnabledAtAllRates) BOOL audioPlaybackEnabledAtAllRates;
- (void)removeAudioPlaybackRateLimits;
@property(nonatomic) BOOL allowsPixelBufferPoolSharing;
- (BOOL)_allowsPixelBufferPoolSharing;
- (void)setDisallowsHardwareAcceleratedVideoDecoder:(BOOL)arg1;
- (BOOL)disallowsHardwareAcceleratedVideoDecoder;
- (BOOL)_disallowsHardwareAcceleratedVideoDecoder;
@property(nonatomic) BOOL disallowsAMRAudio;
- (BOOL)_disallowsAMRAudio;
- (id)mediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;
@property(nonatomic) BOOL appliesMediaSelectionCriteriaAutomatically;
- (BOOL)_appliesMediaSelectionCriteriaAutomatically;
- (id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (void)setPreparesItemsForPlaybackAsynchronously:(BOOL)arg1;
- (BOOL)preparesItemsForPlaybackAsynchronously;
- (void)setAutoSwitchStreamVariants:(BOOL)arg1;
- (BOOL)autoSwitchStreamVariants;
@property(copy, nonatomic) NSString *audioOutputDeviceUniqueID;
- (id)_audioOutputDeviceUniqueID;
@property(nonatomic) BOOL allowsOutOfBandTextTrackRendering;
@property(copy, nonatomic) NSString *multichannelAudioStrategy;
- (id)_multichannelAudioStrategy;
@property(copy, nonatomic) NSString *captionRenderingStrategy;
@property(copy, nonatomic) NSString *captionPipelineStrategy;

@end

