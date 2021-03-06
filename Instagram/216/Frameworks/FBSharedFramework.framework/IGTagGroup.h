//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGTagGroupProtocol-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSMutableOrderedSet, NSString;

@interface IGTagGroup : NSObject <IGTagGroupProtocol, NSSecureCoding, NSCopying>
{
    struct recursive_mutex _inTagsMutex;
    NSMutableOrderedSet *_inTags;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableOrderedSet *inTags; // @synthesize inTags=_inTags;
- (id)tagForObject:(id)arg1;
- (_Bool)containsTagForObject:(id)arg1;
- (void)removeAllTags;
- (void)removeTag:(id)arg1;
- (void)addTag:(id)arg1;
- (Class)tagClass;
- (id)asDictionary;
- (_Bool)updateWithDictionary:(id)arg1 objectStores:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

