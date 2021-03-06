//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGImageUploadSource, IGPostPendingShareMetadata, IGPostSessionInternal, NSDictionary, NSError, NSString, NSURL;
@protocol IGPostDataProvider, IGUserLauncherSetProviding;

@interface IGPostShare : NSObject <NSCopying>
{
    IGPostSessionInternal *_postSession;
    NSString *_shareId;
    id <IGPostDataProvider> _postDataProvider;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    NSString *_postId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(readonly, copy, nonatomic) NSString *postId; // @synthesize postId=_postId;
- (id)debugDescription;
- (_Bool)isPermanentlyFailed;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)retry;
- (void)cancelFromUserAction:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *lastErrorIdentifier;
@property(readonly, copy, nonatomic) NSError *lastError;
- (id)uploadIds;
@property(readonly, nonatomic) NSURL *anyRenderedVideoUrl;
@property(readonly, nonatomic) IGImageUploadSource *videoCoverImageSource;
@property(readonly, nonatomic) IGImageUploadSource *previewImageSource;
@property(readonly, nonatomic) IGPostPendingShareMetadata *pendingShareMetadata;
@property(readonly, copy, nonatomic) NSString *configureUserPk;
@property(readonly, copy, nonatomic) NSString *shareUserPk;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly, copy, nonatomic) NSDictionary *lastErrorResponse;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) long long mediaDataType;
@property(readonly, nonatomic) long long shareType;
@property(readonly, nonatomic) long long status;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShareId:(id)arg1 postSession:(id)arg2 postDataProvider:(id)arg3 launcherSetProvider:(id)arg4;

@end

