//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;

@interface SideBarImageView : NSView
{
    NSImage *_image;
    unsigned long long _imageScaling;
}

@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

