//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface IGProCategorySelectionListSectionViewModel : IGValueObject <IGListDiffable, NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)viewModelWithCategories:(id)arg1 selectedCategory:(id)arg2 title:(id)arg3;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;

@end
