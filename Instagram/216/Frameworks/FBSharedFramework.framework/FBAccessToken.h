//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBAccessToken : NSObject <NSCopying>
{
    NSString *_token;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *token; // @synthesize token=_token;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_tokenIsValid;
- (id)description;
- (id)initWithToken:(id)arg1;

@end

