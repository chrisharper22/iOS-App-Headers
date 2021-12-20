//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKShareMedia-Protocol.h"
#import "FBSDKSharingValidation-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString, NSURL, PHAsset, UIImage;

@interface FBSDKSharePhoto : NSObject <NSSecureCoding, NSCopying, NSObject, FBSDKShareMedia, FBSDKSharingValidation>
{
    _Bool _userGenerated;
    UIImage *_image;
    NSURL *_imageURL;
    PHAsset *_photoAsset;
    NSString *_caption;
}

+ (_Bool)supportsSecureCoding;
+ (id)photoWithPhotoAsset:(id)arg1 userGenerated:(_Bool)arg2;
+ (id)photoWithImageURL:(id)arg1 userGenerated:(_Bool)arg2;
+ (id)photoWithImage:(id)arg1 userGenerated:(_Bool)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(nonatomic, getter=isUserGenerated) _Bool userGenerated; // @synthesize userGenerated=_userGenerated;
@property(copy, nonatomic) PHAsset *photoAsset; // @synthesize photoAsset=_photoAsset;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)validateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)isEqualToSharePhoto:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

