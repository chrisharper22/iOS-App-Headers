//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGPostLoggingContext, IGPostShareIntent, IGPostShareSessionContext, IGUploadSessionContext, NSArray, NSDate, NSDictionary;

@interface IGPostSessionContext : FBValueObject <NSCopying, NSCoding>
{
    _Bool _highQuality;
    NSDate *_postCreationDate;
    NSArray *_uploadIds;
    IGUploadSessionContext *_uploadSessionContext;
    IGPostShareSessionContext *_shareSessionContext;
    IGPostLoggingContext *_postLoggingContext;
    long long _entryPointType;
    long long _mediaDataType;
    NSDictionary *_crossAccountSharingNonces;
    IGPostShareIntent *_shareIntent;
    long long _resumeCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long resumeCount; // @synthesize resumeCount=_resumeCount;
@property(readonly, copy, nonatomic) IGPostShareIntent *shareIntent; // @synthesize shareIntent=_shareIntent;
@property(readonly, copy, nonatomic) NSDictionary *crossAccountSharingNonces; // @synthesize crossAccountSharingNonces=_crossAccountSharingNonces;
@property(readonly, nonatomic) long long mediaDataType; // @synthesize mediaDataType=_mediaDataType;
@property(readonly, nonatomic) _Bool highQuality; // @synthesize highQuality=_highQuality;
@property(readonly, nonatomic) long long entryPointType; // @synthesize entryPointType=_entryPointType;
@property(readonly, copy, nonatomic) IGPostLoggingContext *postLoggingContext; // @synthesize postLoggingContext=_postLoggingContext;
@property(readonly, copy, nonatomic) IGPostShareSessionContext *shareSessionContext; // @synthesize shareSessionContext=_shareSessionContext;
@property(readonly, copy, nonatomic) IGUploadSessionContext *uploadSessionContext; // @synthesize uploadSessionContext=_uploadSessionContext;
@property(readonly, copy, nonatomic) NSArray *uploadIds; // @synthesize uploadIds=_uploadIds;
@property(readonly, copy, nonatomic) NSDate *postCreationDate; // @synthesize postCreationDate=_postCreationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPostCreationDate:(id)arg1 uploadIds:(id)arg2 uploadSessionContext:(id)arg3 shareSessionContext:(id)arg4 postLoggingContext:(id)arg5 entryPointType:(long long)arg6 highQuality:(_Bool)arg7 mediaDataType:(long long)arg8 crossAccountSharingNonces:(id)arg9 shareIntent:(id)arg10 resumeCount:(long long)arg11;
- (id)initWithCoder:(id)arg1;
- (id)isInvalid;

@end

