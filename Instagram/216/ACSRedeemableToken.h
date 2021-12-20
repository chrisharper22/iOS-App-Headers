//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface ACSRedeemableToken : FBValueObject <NSCopying, NSCoding>
{
    NSString *_projectName;
    NSString *_serverConfigId;
    NSData *_tag;
    NSData *_credential;
    NSData *_data;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSData *credential; // @synthesize credential=_credential;
@property(readonly, copy, nonatomic) NSData *tag; // @synthesize tag=_tag;
@property(readonly, copy, nonatomic) NSString *serverConfigId; // @synthesize serverConfigId=_serverConfigId;
@property(readonly, copy, nonatomic) NSString *projectName; // @synthesize projectName=_projectName;
- (id)initWithProjectName:(id)arg1 serverConfigId:(id)arg2 tag:(id)arg3 credential:(id)arg4 data:(id)arg5;

@end

