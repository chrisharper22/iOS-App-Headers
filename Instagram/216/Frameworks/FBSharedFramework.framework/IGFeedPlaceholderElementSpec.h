//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@interface IGFeedPlaceholderElementSpec : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    struct UIEdgeInsets _item_inset;
    double _item_cornerRadius;
    CDUnknownBlockType _item_sizeBlock;
    Class _cell_cellClass;
    struct UIEdgeInsets _cell_inset;
    double _cell_minimumInteritemSpacing;
    CDUnknownBlockType _cell_sizeBlock;
    double _spacing_size;
}

+ (id)spacingWithSize:(double)arg1;
+ (id)itemWithInset:(struct UIEdgeInsets)arg1 cornerRadius:(double)arg2 sizeBlock:(CDUnknownBlockType)arg3;
+ (id)cellWithCellClass:(Class)arg1 inset:(struct UIEdgeInsets)arg2 minimumInteritemSpacing:(double)arg3 sizeBlock:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)matchItem:(CDUnknownBlockType)arg1 cell:(CDUnknownBlockType)arg2 spacing:(CDUnknownBlockType)arg3;
- (double)matchDoubleItem:(CDUnknownBlockType)arg1 cell:(CDUnknownBlockType)arg2 spacing:(CDUnknownBlockType)arg3;

@end
