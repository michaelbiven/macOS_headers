//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <EventKitUI/EKCurrentTimeMarkerViewUpdating-Protocol.h>
#import <EventKitUI/EKUITintColorUpdateDelegate-Protocol.h>

@class EKCurrentTimeMarkerView, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIImageView, UIVisualEffect;

__attribute__((visibility("hidden")))
@interface EKDayGridView : UIView <EKUITintColorUpdateDelegate, EKCurrentTimeMarkerViewUpdating>
{
    double _timeInset;
    double _hourHeight;
    double _timeWidth;
    unsigned int _leftBorder:1;
    unsigned int _rightBorder:1;
    int _selected;
    double _fixedDayWidth;
    long long _orientation;
    struct CGRect _lastBounds;
    UIColor *_backgroundColor;
    UIView *_leftBorderView;
    NSMutableArray *_middleBorderViews;
    UIView *_rightBorderView;
    NSMutableArray *_gridPatternViews;
    unsigned long long _daysToDisplay;
    EKCurrentTimeMarkerView *_timeMarker;
    UIImageView *_timeDot;
    UIView *_highlightedDayBackground;
    UIView *_fadingHighlightedDayBackground;
    UIView *_gridContainerView;
    NSMutableDictionary *_gridParentViews;
    double _cachedWidthForOffMainThreadWork;
    long long _sizeClass;
    BOOL _needsLayoutInWindow;
    BOOL _rightBorderInsetsOccurrences;
    BOOL _showsTimeLine;
    BOOL _showsTimeMarker;
    BOOL _animatesTimeMarker;
    BOOL _usesVibrantGridDrawing;
    UIColor *_lineColor;
    long long _timeMarkerDotDay;
    double _eventHorizontalInset;
    double _hoursToPadTop;
    double _hoursToPadBottom;
    long long _highlightedDayIndex;
    UIVisualEffect *_gridVisualEffect;
    UIView *_occurrenceContainerView;
    double _gridHeightScale;
}

+ (void)cacheBackgroundImage:(id)arg1 forKey:(id)arg2;
+ (id)cachedBackgroundImageForKey:(id)arg1;
@property(nonatomic) double gridHeightScale; // @synthesize gridHeightScale=_gridHeightScale;
@property(retain, nonatomic) UIView *occurrenceContainerView; // @synthesize occurrenceContainerView=_occurrenceContainerView;
@property(retain, nonatomic) UIVisualEffect *gridVisualEffect; // @synthesize gridVisualEffect=_gridVisualEffect;
@property(readonly, nonatomic) EKCurrentTimeMarkerView *timeMarker; // @synthesize timeMarker=_timeMarker;
@property(nonatomic) long long highlightedDayIndex; // @synthesize highlightedDayIndex=_highlightedDayIndex;
@property(nonatomic) BOOL usesVibrantGridDrawing; // @synthesize usesVibrantGridDrawing=_usesVibrantGridDrawing;
@property(nonatomic) double hoursToPadBottom; // @synthesize hoursToPadBottom=_hoursToPadBottom;
@property(nonatomic) double hoursToPadTop; // @synthesize hoursToPadTop=_hoursToPadTop;
@property(nonatomic) double eventHorizontalInset; // @synthesize eventHorizontalInset=_eventHorizontalInset;
@property(nonatomic) long long timeMarkerDotDay; // @synthesize timeMarkerDotDay=_timeMarkerDotDay;
@property(nonatomic) BOOL animatesTimeMarker; // @synthesize animatesTimeMarker=_animatesTimeMarker;
@property(nonatomic) BOOL showsTimeMarker; // @synthesize showsTimeMarker=_showsTimeMarker;
@property(nonatomic) BOOL showsTimeLine; // @synthesize showsTimeLine=_showsTimeLine;
@property(nonatomic) BOOL rightBorderInsetsOccurrences; // @synthesize rightBorderInsetsOccurrences=_rightBorderInsetsOccurrences;
- (void).cxx_destruct;
- (id)_generateGridImage;
- (void)layoutSubviews;
- (void)_layoutHighlight;
- (double)_dayWidth;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double fixedDayWidth;
@property(nonatomic, getter=isSelected) BOOL selected;
- (int)secondAtPosition:(double)arg1;
- (double)positionOfSecond:(long long)arg1;
@property(readonly, nonatomic) double timeWidth;
@property(readonly, nonatomic) double widthForOccurrences;
- (struct CGRect)rectForStartSeconds:(long long)arg1 endSeconds:(long long)arg2;
@property(nonatomic) BOOL showsRightBorder;
@property(nonatomic) BOOL showsLeftBorder;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;
- (void)tintColorDidChange;
- (void)_updateTimeMarker;
- (id)timeDotImage;
- (void)updateMarkerPosition;
- (void)updateHourHeight;
@property(readonly, nonatomic) double hourHeight;
@property(readonly, nonatomic) double timeInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)bottomPadding;
@property(readonly, nonatomic) double topPadding;
- (void)setOrientation:(long long)arg1;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (long long)_sizeClass;
- (id)initWithFrame:(struct CGRect)arg1 sizeClass:(long long)arg2 backgroundColor:(id)arg3 opaque:(BOOL)arg4 numberOfDaysToDisplay:(unsigned long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

