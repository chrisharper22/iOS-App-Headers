//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSData, NSString;

@interface IGOffProcessRequestInfo : FBValueObject <NSCopying, NSCoding>
{
    NSString *_userPK;
    NSData *_requestData;
    long long _requestStrategy;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long requestStrategy; // @synthesize requestStrategy=_requestStrategy;
@property(readonly, copy, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(readonly, copy, nonatomic) NSString *userPK; // @synthesize userPK=_userPK;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUserPK:(id)arg1 requestData:(id)arg2 requestStrategy:(long long)arg3;
- (id)initWithCoder:(id)arg1;

@end

