//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class CALayer, NSImage;

@interface NCIdentityImageView : NSImageView
{
    CALayer *_maskLayer;
    CALayer *_innerGlow;
    CALayer *_iconBadgeLayer;
    _Bool _layersSetup;
    NSImage *_iconBadge;
    unsigned long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) NSImage *iconBadge; // @synthesize iconBadge=_iconBadge;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)awakeFromNib;

@end

