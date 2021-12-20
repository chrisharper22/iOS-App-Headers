//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import "NSCoding-Protocol.h"

@class IGShoppingProductCollectionTileHScrollDataModel, IGUser, NSArray, NSString;

@interface IGShoppingProductCollectionPivotDataModel : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    NSString *_continueShoppingRow_title;
    NSString *_continueShoppingRow_subtitle;
    IGUser *_continueShoppingRow_merchant;
    NSString *_brandTileHscroll_title;
    NSArray *_brandTileHscroll_brands;
    IGShoppingProductCollectionTileHScrollDataModel *_productCollectionTileHScroll;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
+ (id)productCollectionTileHScroll:(id)arg1;
+ (id)continueShoppingRowWithTitle:(id)arg1 subtitle:(id)arg2 merchant:(id)arg3;
+ (id)brandTileHscrollWithTitle:(id)arg1 brands:(id)arg2;
- (void).cxx_destruct;
- (void)matchContinueShoppingRow:(CDUnknownBlockType)arg1 brandTileHscroll:(CDUnknownBlockType)arg2 productCollectionTileHScroll:(CDUnknownBlockType)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

