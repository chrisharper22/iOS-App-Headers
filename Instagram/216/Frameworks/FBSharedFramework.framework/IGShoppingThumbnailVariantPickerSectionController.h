//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGShoppingThumbnailVariantPickerConfiguration, IGShoppingVariantValueViewModel, NSString;

@interface IGShoppingThumbnailVariantPickerSectionController : IGListSectionController
{
    IGShoppingVariantValueViewModel *_model;
    IGShoppingThumbnailVariantPickerConfiguration *_configuration;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets)inset;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (id)initWithConfiguration:(id)arg1 analyticsModule:(id)arg2;

@end

