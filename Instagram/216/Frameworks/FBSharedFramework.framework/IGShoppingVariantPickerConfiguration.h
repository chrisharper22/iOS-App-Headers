//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGShoppingTextVariantPickerConfiguration, IGShoppingThumbnailVariantPickerConfiguration;

@interface IGShoppingVariantPickerConfiguration : NSObject
{
    IGShoppingThumbnailVariantPickerConfiguration *_thumbnailPickerConfiguration;
    IGShoppingTextVariantPickerConfiguration *_textPickerConfiguration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGShoppingTextVariantPickerConfiguration *textPickerConfiguration; // @synthesize textPickerConfiguration=_textPickerConfiguration;
@property(readonly, nonatomic) IGShoppingThumbnailVariantPickerConfiguration *thumbnailPickerConfiguration; // @synthesize thumbnailPickerConfiguration=_thumbnailPickerConfiguration;
- (id)initWithThumbnailPickerConfiguration:(id)arg1 textPickerConfiguration:(id)arg2;

@end
