//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class FBAREffectShaderPackMetadata, NSString;

@interface FBAREffectShaderPack : FBValueObject <NSCopying, NSCoding>
{
    NSString *_key;
    FBAREffectShaderPackMetadata *_metadata;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBAREffectShaderPackMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)initWithKey:(id)arg1 metadata:(id)arg2;

@end

