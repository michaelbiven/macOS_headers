//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VCVideoFrameBufferPool;

__attribute__((visibility("hidden")))
@interface VCEffects : NSObject
{
    int _effectsMode;
    VCVideoFrameBufferPool *_bufferPool;
}

@property(nonatomic) int effectsMode; // @synthesize effectsMode=_effectsMode;
- (BOOL)releaseFrameWithTime:(long long)arg1;
- (BOOL)addFrame:(struct __CVBuffer *)arg1 time:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

