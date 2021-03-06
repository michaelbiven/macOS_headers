//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAAnimationDelegate.h"
#import "CALayerDelegate.h"
#import "IRefreshableItemView.h"
#import "ITItemViewProtocol.h"

@class CALayer, Item, NSString;

@interface ITItemView : NSObject <CALayerDelegate, CAAnimationDelegate, ITItemViewProtocol, IRefreshableItemView>
{
    id <ITContext> _context;
    double _frameOriginY;
    double _frameWidth;
    struct {
        unsigned int isChecked:1;
        unsigned int isDimmed:1;
        unsigned int isDimming:1;
        unsigned int isTransient:1;
        unsigned int isRefreshing:1;
        unsigned int isNameCached:1;
        unsigned int isModelChanged:1;
    } _flags;
    Item *_item;
    CALayer *_layer;
    NSString *_name;
    double _lastRefreshTime;
    unsigned long long _lastDrawnSizeInBytes;
}

@property(readonly, nonatomic) unsigned long long lastDrawnSizeInBytes; // @synthesize lastDrawnSizeInBytes=_lastDrawnSizeInBytes;
@property(nonatomic) double lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(readonly, nonatomic) Item *item; // @synthesize item=_item;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isSeparator;
- (void)resetZoom;
- (void)zoom;
- (void)setModelChanged;
@property(readonly, nonatomic) BOOL isVisible;
@property(nonatomic, setter=setRefreshing:) BOOL isRefreshing;
@property(nonatomic, setter=setTransient:) BOOL isTransient;
@property(nonatomic, setter=setDimmed:) BOOL isDimmed;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
@property(nonatomic, setter=setChecked:) BOOL isChecked;
- (BOOL)hitTestX:(double)arg1 isScrollbarVisible:(BOOL)arg2;
@property(readonly, nonatomic) struct CGRect frame;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawSelected:(BOOL)arg1;
- (void)drawSizeValue:(unsigned long long)arg1 isSelected:(BOOL)arg2;
- (void)drawNameSelected:(BOOL)arg1;
- (struct CGRect)nameFrame;
- (struct CGPoint)floorPointY:(struct CGPoint)arg1;
- (id)nameTextAttributesSelected:(BOOL)arg1;
- (void)drawIcon;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)setFrameWidth:(double)arg1 shouldRedraw:(BOOL)arg2;
- (void)setFrameWidth:(double)arg1;
- (void)setFrameOriginYByIndex:(unsigned long long)arg1 relativeToLayer:(id)arg2;
- (void)setFrameOriginYByIndex:(double)arg1;
- (void)setFrameOriginY:(double)arg1;
- (void)redrawIfModelChanged;
- (void)displayIfNeeded;
- (void)redraw;
- (id)selection;
- (void)dealloc;
- (id)initWithContext:(id)arg1 item:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

