//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@interface IGShoppingVariantPickerOutOfStockValueStyle : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    _Bool _strikethrough_interactionEnabled;
    _Bool _strikethrough_shouldDimText;
}

+ (id)strikethroughWithInteractionEnabled:(_Bool)arg1 shouldDimText:(_Bool)arg2;
+ (id)none;
- (void)matchNone:(CDUnknownBlockType)arg1 strikethrough:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanNone:(CDUnknownBlockType)arg1 strikethrough:(CDUnknownBlockType)arg2;

@end
