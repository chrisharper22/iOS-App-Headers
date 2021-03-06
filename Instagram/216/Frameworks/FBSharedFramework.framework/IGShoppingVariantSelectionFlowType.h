//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGShoppingVariantDimensionViewModel;

@interface IGShoppingVariantSelectionFlowType : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGShoppingVariantDimensionViewModel *_dimension_dimension;
    _Bool _dimension_shouldForceSelectionOfAllDimensionsWhenSoldOut;
}

+ (id)visualDimension;
+ (id)dimensionWithDimension:(id)arg1 shouldForceSelectionOfAllDimensionsWhenSoldOut:(_Bool)arg2;
+ (id)allUnselectedDimensions;
- (void).cxx_destruct;
- (void)matchVisualDimension:(CDUnknownBlockType)arg1 allUnselectedDimensions:(CDUnknownBlockType)arg2 dimension:(CDUnknownBlockType)arg3;
- (_Bool)matchBooleanVisualDimension:(CDUnknownBlockType)arg1 allUnselectedDimensions:(CDUnknownBlockType)arg2 dimension:(CDUnknownBlockType)arg3;

@end

