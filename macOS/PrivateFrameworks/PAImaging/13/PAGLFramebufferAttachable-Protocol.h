//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class PAGLFramebuffer, PAOpenGLContext;

@protocol PAGLFramebufferAttachable
- (void)detachFromFramebuffer:(PAGLFramebuffer *)arg1 atPoint:(unsigned int)arg2 context:(PAOpenGLContext *)arg3;
- (void)attachToFramebuffer:(PAGLFramebuffer *)arg1 atPoint:(unsigned int)arg2 context:(PAOpenGLContext *)arg3;
@end

