//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSApplication/TSAInducedVerifyDrawableZOrdersWithServerCommand.h>

#import "GSSPAutoEncodable-Protocol.h"

@interface TPInducedVerifyDrawableZOrdersWithServerCommand : TSAInducedVerifyDrawableZOrdersWithServerCommand <GSSPAutoEncodable>
{
}

- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)drawableZOrderListForContainerId:(id)arg1;
- (BOOL)isContainer:(id)arg1;
-     // Error parsing type: v32@0:8r^{InducedVerifyDrawableZOrdersWithServerCommandArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{InducedVerifyDrawableZOrdersWithServerCommandArchive}}16@24, name: loadFromArchive:unarchiver:
-     // Error parsing type: v32@0:8^{InducedVerifyDrawableZOrdersWithServerCommandArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{InducedVerifyDrawableZOrdersWithServerCommandArchive}}16@24, name: saveToArchive:archiver:
- (void)populateGSSPCmdInducedVerifyPagesDrawableZOrdersWithServer:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

