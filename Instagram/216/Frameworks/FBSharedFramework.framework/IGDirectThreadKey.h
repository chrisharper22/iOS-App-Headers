//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGDirectThreadKeyInternal;

@interface IGDirectThreadKey : NSObject <NSCopying>
{
    IGDirectThreadKeyInternal *_internalThreadKey;
}

+ (id)cutoverThreadWithIdentifier:(id)arg1;
+ (id)msysThreadWithIdentifier:(id)arg1;
+ (id)djangoThreadWithIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)matchDjangoThread:(CDUnknownBlockType)arg1 msysThread:(CDUnknownBlockType)arg2 cutoverThread:(CDUnknownBlockType)arg3;
- (id)initWithInternalThreadKey:(id)arg1;

@end

