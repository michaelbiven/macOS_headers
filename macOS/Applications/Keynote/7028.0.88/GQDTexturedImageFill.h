//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GQDNameMappable-Protocol.h"
#import "ICExportable-Protocol.h"

@class GQDColor, GQDFilteredImage, GQDImageBinary, NSString;

@interface GQDTexturedImageFill : NSObject <ICExportable, GQDNameMappable>
{
    int mTechnique;
    GQDColor *mColor;
    GQDFilteredImage *mFilteredImage;
    GQDImageBinary *mImageBinary;
}

+ (const struct StateSpec *)stateForReading;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)imageBinary;
- (id)color;
- (int)technique;
- (void)dealloc;
- (void)invalidateFilteredImage;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;
- (void)setFilteredImage:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setTechnique:(int)arg1;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

