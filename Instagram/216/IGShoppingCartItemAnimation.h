//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSArray, NSString;

@interface IGShoppingCartItemAnimation : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_addItem_productItemPk;
    NSArray *_emphasizeItems_itemPKs;
}

+ (id)emphasizeItemsWithItemPKs:(id)arg1;
+ (id)addItemWithProductItemPk:(id)arg1;
- (void).cxx_destruct;
- (void)matchAddItem:(CDUnknownBlockType)arg1 emphasizeItems:(CDUnknownBlockType)arg2;

@end

