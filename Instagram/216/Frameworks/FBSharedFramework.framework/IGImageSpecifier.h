//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGImageURL, NSString, NSURL, UIImage;
@protocol IGExternalImageResolving, IGUserLauncherSet;

@interface IGImageSpecifier : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    UIImage *_localImage_image;
    NSString *_localImage_module;
    UIImage *_userInterfaceStyleDependentLocalImage_lightImage;
    UIImage *_userInterfaceStyleDependentLocalImage_darkImage;
    NSString *_userInterfaceStyleDependentLocalImage_module;
    IGImageURL *_remoteImage_imageURL;
    NSString *_remoteImage_module;
    long long _remoteImage_imageFetchPriority;
    IGImageURL *_adaptiveRemoteImage_imageURL;
    NSString *_adaptiveRemoteImage_module;
    long long _adaptiveRemoteImage_imageFetchPriority;
    id <IGUserLauncherSet> _adaptiveRemoteImage_launcherSet;
    IGImageURL *_userInterfaceStyleDependentRemoteImage_lightURL;
    IGImageURL *_userInterfaceStyleDependentRemoteImage_darkURL;
    NSString *_userInterfaceStyleDependentRemoteImage_module;
    long long _userInterfaceStyleDependentRemoteImage_imageFetchPriority;
    id <IGExternalImageResolving> _externalImage_imageResolver;
    NSString *_externalImage_module;
}

+ (id)userInterfaceStyleDependentRemoteImageWithLightURL:(id)arg1 darkURL:(id)arg2 module:(id)arg3 imageFetchPriority:(long long)arg4;
+ (id)userInterfaceStyleDependentLocalImageWithLightImage:(id)arg1 darkImage:(id)arg2 module:(id)arg3;
+ (id)remoteImageWithImageURL:(id)arg1 module:(id)arg2 imageFetchPriority:(long long)arg3;
+ (id)localImageWithImage:(id)arg1 module:(id)arg2;
+ (id)externalImageWithImageResolver:(id)arg1 module:(id)arg2;
+ (id)adaptiveRemoteImageWithImageURL:(id)arg1 module:(id)arg2 imageFetchPriority:(long long)arg3 launcherSet:(id)arg4;
+ (id)untrackedRemoteImageWithURL:(id)arg1 module:(id)arg2 imageFetchPriority:(long long)arg3;
+ (id)untrackedRemoteImageIfNeededWithURL:(id)arg1 module:(id)arg2 imageFetchPriority:(long long)arg3;
- (void).cxx_destruct;
- (void)matchLocalImage:(CDUnknownBlockType)arg1 userInterfaceStyleDependentLocalImage:(CDUnknownBlockType)arg2 remoteImage:(CDUnknownBlockType)arg3 adaptiveRemoteImage:(CDUnknownBlockType)arg4 userInterfaceStyleDependentRemoteImage:(CDUnknownBlockType)arg5 externalImage:(CDUnknownBlockType)arg6;
- (_Bool)matchBooleanLocalImage:(CDUnknownBlockType)arg1 userInterfaceStyleDependentLocalImage:(CDUnknownBlockType)arg2 remoteImage:(CDUnknownBlockType)arg3 adaptiveRemoteImage:(CDUnknownBlockType)arg4 userInterfaceStyleDependentRemoteImage:(CDUnknownBlockType)arg5 externalImage:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) NSString *module;
@property(readonly, nonatomic) NSURL *url;

@end
