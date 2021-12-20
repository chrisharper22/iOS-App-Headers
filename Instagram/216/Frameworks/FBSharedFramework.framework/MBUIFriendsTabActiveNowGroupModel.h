//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface MBUIFriendsTabActiveNowGroupModel : NSObject <NSCopying>
{
    struct __MCFRuntimeBaseData _reserved;
    long long _threadKey;
    int _status;
    long long _lastActiveTimestampMs;
    long long _expirationTimestampMs;
    double _score;
    NSString *_requestId;
    int _scoreIndex;
    long long _lastThreadActivityTimestampMs;
    NSString *_displayName;
    NSString *_threadPictureUrl;
    NSString *_threadPictureUrlFallback;
    long long _threadPictureUrlExpirationTimestampMs;
    NSString *_secondaryText;
}

- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)description;
- (unsigned long long)_cfTypeID;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *secondaryText;
@property(readonly, nonatomic) long long threadPictureUrlExpirationTimestampMs;
@property(readonly, copy, nonatomic) NSString *threadPictureUrlFallback;
@property(readonly, copy, nonatomic) NSString *threadPictureUrl;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) long long lastThreadActivityTimestampMs;
@property(readonly, nonatomic) int scoreIndex;
@property(readonly, copy, nonatomic) NSString *requestId;
@property(readonly, nonatomic) double score;
@property(readonly, nonatomic) long long expirationTimestampMs;
@property(readonly, nonatomic) long long lastActiveTimestampMs;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) long long threadKey;

@end
