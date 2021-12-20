//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGDirectMessageKey : NSObject <NSCopying>
{
    NSString *_clientId;
    NSString *_serverId;
}

+ (id)keyWithServerId:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isPublished;
- (id)value;
- (id)initWithServerId:(id)arg1 clientId:(id)arg2;
- (id)initWithClientId:(id)arg1;
- (id)initWithServerId:(id)arg1;

@end

