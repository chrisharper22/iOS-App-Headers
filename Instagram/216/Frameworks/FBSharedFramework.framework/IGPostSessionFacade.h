//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGPostSessionType-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGPostCreationManager;
@protocol IGPostSessionType;

@interface IGPostSessionFacade : NSObject <IGPostSessionType, NSCopying>
{
    id <IGPostSessionType> _postSession;
    IGPostCreationManager *_postCreationManager;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugObject:(id)arg1;
- (id)createShareLoggerWithShareType:(long long)arg1 shareId:(id)arg2 logger:(id)arg3;
- (id)shareForShareId:(id)arg1;
- (id)shares;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)cancelUploadFromUserAction:(_Bool)arg1;
- (void)retry;
- (id)imageSource;
- (double)uploadProgress;
- (long long)uploadStatus;
- (id)uploadIds;
- (id)postId;
- (id)initWithPostCreationManager:(id)arg1 postSession:(id)arg2;

@end

