//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol IKEngineDelegate;

@interface IKEngine : NSObject
{
    id <IKEngineDelegate> _delegate;
    NSString *_OAuthToken;
    NSString *_OAuthTokenSecret;
    NSMutableDictionary *_connections;
}

+ (void)setOAuthConsumerKey:(id)arg1 andConsumerSecret:(id)arg2;
@property(copy, nonatomic) NSString *OAuthTokenSecret; // @synthesize OAuthTokenSecret=_OAuthTokenSecret;
@property(copy, nonatomic) NSString *OAuthToken; // @synthesize OAuthToken=_OAuthToken;
@property(nonatomic) id <IKEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_signatureWithKey:(id)arg1 baseString:(id)arg2;
- (id)_startConnectionWithAPIPath:(id)arg1 bodyArguments:(id)arg2 type:(int)arg3 userInfo:(id)arg4 context:(id)arg5;
- (void)dealloc;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancelAllConnections;
- (void)cancelConnection:(id)arg1;
- (id)orderFolders:(id)arg1 userInfo:(id)arg2;
- (id)deleteFolder:(id)arg1 userInfo:(id)arg2;
- (id)addFolderWithTitle:(id)arg1 userInfo:(id)arg2;
- (id)foldersWithUserInfo:(id)arg1;
- (id)textOfBookmark:(id)arg1 userInfo:(id)arg2;
- (id)moveBookmark:(id)arg1 toFolder:(id)arg2 userInfo:(id)arg3;
- (id)unarchiveBookmark:(id)arg1 userInfo:(id)arg2;
- (id)archiveBookmark:(id)arg1 userInfo:(id)arg2;
- (id)unstarBookmark:(id)arg1 userInfo:(id)arg2;
- (id)starBookmark:(id)arg1 userInfo:(id)arg2;
- (id)deleteBookmark:(id)arg1 userInfo:(id)arg2;
- (id)addBookmarkWithURL:(id)arg1 title:(id)arg2 description:(id)arg3 folder:(id)arg4 resolveFinalURL:(BOOL)arg5 userInfo:(id)arg6;
- (id)addBookmarkWithURL:(id)arg1 userInfo:(id)arg2;
- (id)updateReadProgressOfBookmark:(id)arg1 toProgress:(double)arg2 userInfo:(id)arg3;
- (id)bookmarksInFolder:(id)arg1 limit:(unsigned long long)arg2 existingBookmarks:(id)arg3 userInfo:(id)arg4;
- (id)bookmarksWithUserInfo:(id)arg1;
- (id)verifyCredentialsWithUserInfo:(id)arg1;
- (id)authTokenForUsername:(id)arg1 password:(id)arg2 userInfo:(id)arg3;
- (unsigned long long)numberOfConnections;
- (id)identifierForConnection:(id)arg1;
- (id)connectionForIdentifier:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

