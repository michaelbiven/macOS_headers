//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AXValidatingElement.h"

#import "AXShadowStyle-Protocol.h"

@interface AXDomShadowStyle : AXValidatingElement <AXShadowStyle>
{
}

+ (void)initialize;
- (void)validateSelf;
- (void)axSetColor:(id)arg1;
- (id)axGetColor;
- (void)axSetOpacity:(float)arg1;
- (float)axGetOpacity;
- (void)axSetRadius:(int)arg1;
- (int)axGetRadius;
- (void)axSetOffset:(float)arg1;
- (float)axGetOffset;
- (void)axSetAngle:(float)arg1;
- (float)axGetAngle;
- (void)initializeNewElement;

@end

