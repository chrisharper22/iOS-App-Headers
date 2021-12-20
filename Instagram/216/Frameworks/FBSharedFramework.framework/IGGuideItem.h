//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface IGGuideItem : IGValueObject <IGListDiffable, NSCopying, NSCoding>
{
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
+ (void)initialize;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)newItemWithAttachment:(id)arg1;
- (id)newItemWithMediaItems:(id)arg1;
- (id)newItemWithDetailText:(id)arg1;
- (id)newItemWithTitle:(id)arg1;

@end

