//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class AppleNetworkMenuExtraServiceController, NSArray, NSBundle, NSDate, NSMenuExtra, NSNumber, NSTimer;

@interface AppleNetworkMenuExtraView : NSView
{
    NSArray *mImages;
    NSArray *mAlternateImages;
    NSArray *mTextImages;
    NSArray *mAlternateTextImages;
    NSBundle *mBundle;
    AppleNetworkMenuExtraServiceController *mServiceController;
    NSMenuExtra *mMenuExtra;
    BOOL mShowTimer;
    BOOL mShowAnimatedStatus;
    BOOL mForceTimersOff;
    BOOL mDecreaseFrameSize;
    NSTimer *mStateTimer;
    NSTimer *mSizeTimer;
    NSTimer *mConnectedTimer;
    NSDate *mStateReferenceTime;
    NSDate *mSizeStartTime;
    NSDate *mLastIconChangeTime;
    long long mFrameNumber;
    long long mFrameCount;
    double mMaxWidth;
    NSNumber *mConnectionStartTime;
    double mSleepStartTime;
    long long mSleepTimeAdditionalSeconds;
}

- (void)setConnectionStartTime:(id)arg1;
- (id)localizedString:(id)arg1;
- (BOOL)showAnimatedStatus;
- (void)setShowAnimatedStatus:(BOOL)arg1;
- (BOOL)showTimer;
- (void)setShowTimer:(BOOL)arg1;
- (id)menuExtra;
- (void)setMenuExtra:(id)arg1;
- (void)setAlternateImageArray:(id)arg1;
- (void)setImageArray:(id)arg1;
- (id)alternateImageArray;
- (id)imageArray;
- (id)serviceController;
- (void)setServiceController:(id)arg1;
- (void)stopTimers;
- (void)stopSizeTimer;
- (void)startConnectedTimer;
- (void)stopConnectedTimer;
- (void)startSizeTimer:(SEL)arg1;
- (void)stopStateTimer;
- (void)startStateTimer;
- (void)initializeTimerConstants;
- (long long)elapsedTime;
- (id)getTimeImage:(long long)arg1 isMenuDown:(BOOL)arg2;
- (id)stringAttributes:(BOOL)arg1;
- (long long)getStringWidth:(id)arg1 withAttributes:(id)arg2 isTime:(BOOL)arg3;
- (id)getTextImage:(id)arg1 withAttributes:(id)arg2 isTime:(BOOL)arg3;
- (void)loadTextImages;
- (void)drawConnectedView:(long long)arg1;
- (void)drawNonAnimatedView:(long long)arg1;
- (void)drawAnimated:(long long)arg1;
- (void)drawAnimatedView:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)changeFrameSizeForConnectedView;
- (void)changeFrameSize;
- (void)showConnectedView;
- (void)showNonAnimatedView;
- (void)showAnimatedView;
- (void)drawSelf;
- (void)display;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andBundle:(id)arg2;

@end

