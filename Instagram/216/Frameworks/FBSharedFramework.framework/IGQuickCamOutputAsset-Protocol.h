//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSString, UIImage;

@protocol IGQuickCamOutputAsset <NSObject>
@property(retain, nonatomic) NSString *assetFileName;
@property(retain, nonatomic) NSDictionary *metadata;
@property(copy, nonatomic) NSString *sourceApplication;
@property(nonatomic) unsigned long long faceDetectionState;
@property(nonatomic) long long assetSource;
@property(nonatomic) struct CGSize originalMediaSize;
@property(nonatomic) _Bool isLandscape;
@property(retain, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) _Bool isPhoto;
@property(retain, nonatomic) UIImage *croppedImageWithEdits;
@property(retain, nonatomic) UIImage *croppedImage;
@property(retain, nonatomic) UIImage *displayImageWithEdits;
@property(retain, nonatomic) UIImage *displayImage;
@property(retain, nonatomic) UIImage *originalImage;
- (long long)devicePosition;
@end

