//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface XARUnarchiver : NSObject
{
    NSURL *_URL;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)convertXARError:(id)arg1;
- (id)itemFromXARFile:(id)arg1 parent:(id)arg2 error:(id *)arg3;
- (BOOL)loadRootItem:(id)arg1 withFilesInXARArchive:(id)arg2 archive:(id)arg3 setSizes:(BOOL)arg4 error:(id *)arg5;
- (id)emptyRootItemForArchive:(id)arg1 error:(id *)arg2;
- (id)dataFromFile:(id)arg1 inXARArchive:(id)arg2 threadingHandler:(id)arg3 checksumIsInvalid:(char *)arg4 error:(id *)arg5;
- (void)extractDataForkOfFile:(id)arg1 fromXARArchive:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (BOOL)extractFiles:(id)arg1 fromXARAtURL:(id)arg2 toURL:(id)arg3 failOnInvalidSignature:(BOOL)arg4 threadingHandler:(id)arg5 filesWithInvalidChecksums:(id *)arg6 error:(id *)arg7;
- (BOOL)extractFiles:(id)arg1 fromXARArchive:(id)arg2 toURL:(id)arg3 threadingHandler:(id)arg4 filesWithInvalidChecksums:(id *)arg5 error:(id *)arg6;
- (id)rootItemFromXARArchive:(id)arg1 archive:(id)arg2 setSizes:(BOOL)arg3 threadingHandler:(id)arg4 error:(id *)arg5;
- (id)rootItemFromXARAtURL:(id)arg1 archive:(id)arg2 setSizes:(BOOL)arg3 threadingHandler:(id)arg4 signatureError:(id *)arg5 error:(id *)arg6;
- (id)xarArchiveWithURL:(id)arg1 failOnInvalidSignature:(BOOL)arg2 error:(id *)arg3;
- (BOOL)isXARFileAtURL:(id)arg1;

@end

