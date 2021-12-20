//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGImageRenderHelper : NSObject
{
}

+ (id)_surfaceForImage:(id)arg1 cropRect:(struct CGRect)arg2 editsInfo:(id)arg3 launcherSet:(id)arg4;
+ (void)fetchFullResolutionImageForIdentifier:(id)arg1 isDraft:(_Bool)arg2 feedDraftManager:(id)arg3 originalCropRect:(struct CGRect)arg4 originalImageSize:(struct CGSize)arg5 networkAccessAllowed:(_Bool)arg6 userFeatureSets:(id)arg7 completion:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;
+ (id)_fbRenderPhotoForUpload:(id)arg1 editsDictionary:(id)arg2 launcherSet:(id)arg3 iglContextProvider:(id)arg4 perspectiveAdjustments:(const struct IGPerspectiveAdjustments *)arg5 error:(id *)arg6;
+ (id)_igRenderPhotoForUpload:(id)arg1 editsDictionary:(id)arg2 launcherSet:(id)arg3 perspectiveAdjustments:(const struct IGPerspectiveAdjustments *)arg4 error:(id *)arg5;
+ (id)renderPhotoForUpload:(id)arg1 cropRect:(struct CGRect)arg2 editsDictionary:(id)arg3 launcherSet:(id)arg4 iglContextProvider:(id)arg5 error:(id *)arg6;
+ (void)_fbRenderForMediaMetadata:(id)arg1 editsInfo:(id)arg2 originalImage:(id)arg3 filterEnabled:(_Bool)arg4 launcherSet:(id)arg5 iglContext:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)_igRenderForMediaMetadata:(id)arg1 editsInfo:(id)arg2 originalImage:(id)arg3 filterEnabled:(_Bool)arg4 launcherSet:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)renderForMediaMetadata:(id)arg1 originalImage:(id)arg2 filterEnabled:(_Bool)arg3 launcherSet:(id)arg4 iglContext:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (_Bool)shouldRenderUnfilteredSnapshotForMediaMetadata:(id)arg1;

@end

