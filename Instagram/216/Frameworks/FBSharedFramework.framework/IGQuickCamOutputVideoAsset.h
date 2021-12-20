//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGQuickCamOutputAsset-Protocol.h>
#import <FBSharedFramework/IGVideoRendererDelegate-Protocol.h>

@class IGVideoInfo, IGVideoRenderer, NSData, NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface IGQuickCamOutputVideoAsset : NSObject <IGQuickCamOutputAsset, IGVideoRendererDelegate>
{
    _Bool _isLandscape;
    UIImage *_originalImage;
    UIImage *_displayImage;
    UIImage *_displayImageWithEdits;
    UIImage *_croppedImage;
    UIImage *_croppedImageWithEdits;
    NSDate *_creationDate;
    long long _assetSource;
    NSString *_sourceApplication;
    NSDictionary *_metadata;
    unsigned long long _faceDetectionState;
    NSString *_assetFileName;
    IGVideoInfo *_videoInfo;
    CDUnknownBlockType _completionBlock;
    NSURL *_exportedMediaURL;
    IGVideoRenderer *_videoRenderer;
    struct CGSize _originalMediaSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGVideoRenderer *videoRenderer; // @synthesize videoRenderer=_videoRenderer;
@property(retain, nonatomic) NSURL *exportedMediaURL; // @synthesize exportedMediaURL=_exportedMediaURL;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) IGVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) NSString *assetFileName; // @synthesize assetFileName=_assetFileName;
@property(nonatomic) unsigned long long faceDetectionState; // @synthesize faceDetectionState=_faceDetectionState;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(nonatomic) long long assetSource; // @synthesize assetSource=_assetSource;
@property(nonatomic) struct CGSize originalMediaSize; // @synthesize originalMediaSize=_originalMediaSize;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) UIImage *croppedImageWithEdits; // @synthesize croppedImageWithEdits=_croppedImageWithEdits;
@property(retain, nonatomic) UIImage *croppedImage; // @synthesize croppedImage=_croppedImage;
@property(retain, nonatomic) UIImage *displayImageWithEdits; // @synthesize displayImageWithEdits=_displayImageWithEdits;
@property(retain, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
- (void)_onAppForeground;
- (void)_onAppBackground;
- (void)videoRenderer:(id)arg1 didFailWithError:(id)arg2;
- (void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 videoSize:(struct CGSize)arg3 canceled:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isPhoto;
- (void)applyCropRectToClips:(struct CGRect)arg1;
@property(readonly, nonatomic) NSData *videoData;
- (void)trimVideoToDuration:(double)arg1;
- (void)trimVideoWithAmountTrimmedFromStart:(double)arg1 amountTrimmedFromEnd:(double)arg2;
- (void)prepareVideoDataForExportWithCompletion:(CDUnknownBlockType)arg1 userSession:(id)arg2;
- (long long)devicePosition;
- (id)lastClip;
- (id)firstClip;
- (id)initWithVideoInfo:(id)arg1 assetSource:(long long)arg2 maxVideoDuration:(double)arg3;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
