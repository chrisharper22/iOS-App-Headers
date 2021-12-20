//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGImageSpecifier, UIImage;

@interface IGVideoShareSheetCoverPhoto : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    UIImage *_coverPhotoForUploadMode_image;
    long long _coverPhotoForUploadMode_type;
    IGImageSpecifier *_coverPhotoForEditMode_imageSpecifier;
    long long _coverPhotoForEditMode_type;
}

+ (id)coverPhotoForUploadModeWithImage:(id)arg1 type:(long long)arg2;
+ (id)coverPhotoForEditModeWithImageSpecifier:(id)arg1 type:(long long)arg2;
- (void).cxx_destruct;
- (void)matchCoverPhotoForUploadMode:(CDUnknownBlockType)arg1 coverPhotoForEditMode:(CDUnknownBlockType)arg2;

@end
