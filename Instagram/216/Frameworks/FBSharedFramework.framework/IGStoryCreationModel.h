//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAudioOriginalSoundTrack, IGMultiUploadMetadata, IGRingViewSpec, IGStoryCameraFormatModel, IGStoryCreationAttributionModel, IGStoryCreationEditsModel, IGStoryCreationHighlightConfig, IGStoryRingBadgeSpec, IGStoryTapModelArray, NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSSet, NSString, NSUUID;

@interface IGStoryCreationModel : NSObject
{
    NSMutableOrderedSet *_sponsorPartnerOrderedSet;
    _Bool _hasSeenTextInTombstonesNux;
    _Bool _hasDrawing;
    _Bool _mentionsTappable;
    _Bool _hasMediaReplyOverlay;
    _Bool _isMediaReplyOverlayTransformed;
    _Bool _hasAREffect;
    _Bool _isAREffectInternalOnly;
    _Bool _isPaidPartnership;
    _Bool _allowBrandedContentPartnerToBoost;
    _Bool _createdInRichTextMode;
    _Bool _richTextCameraEnabled;
    _Bool _textModeBackgroundColorToggled;
    _Bool _textModeBackgroundAlphaToggled;
    _Bool _hasAnimatedSticker;
    _Bool _isResharedMediaIdOwnedByViewer;
    _Bool _shareToFacebook;
    _Bool _textModePostHasRainbowGradient;
    _Bool _privateMentionShareEnabled;
    _Bool _isMentionReshare;
    _Bool _isPrideMedia;
    _Bool _isBoomerangV2;
    _Bool _isCapturedInVideoChat;
    _Bool _fromDrafts;
    NSArray *_textFromTextLabelStickers;
    NSArray *_metadataFromTextLabelStickers;
    long long _filterType;
    IGStoryCreationEditsModel *_creationEdits;
    IGStoryCameraFormatModel *_captureMode;
    NSString *_formatVariant;
    long long _contentTrait;
    long long _capturePosition;
    IGStoryTapModelArray *_tapModelArray;
    NSArray *_richTextFormatLoggingNames;
    NSArray *_textMetadataDictionaries;
    NSArray *_galleryStickerStyles;
    long long _mentionsCount;
    long long _pinnedStickerCount;
    long long _mediaReplyOverlayStyle;
    NSArray *_storyLinks;
    NSArray *_internalFeatures;
    NSArray *_stickerIds;
    NSArray *_stickerIdsWithAttribution;
    NSDictionary *_arEffectIDs;
    NSDate *_creationDate;
    long long _mediaAudience;
    NSSet *_appliedAREffectIDsDuringRecording;
    NSSet *_appliedAREffectInstanceIDsDuringRecording;
    NSSet *_appliedAREffectIDsDuringPostcapture;
    NSSet *_appliedAREffectInstanceIDsDuringPostcapture;
    NSString *_selectedAREffectID;
    NSString *_selectedAREffectFileID;
    NSDictionary *_selectedAREffectPersistedMetadata;
    NSString *_productID;
    NSString *_merchantID;
    NSDictionary *_ageGatingInfo;
    NSArray *_geoGatingCountries;
    NSString *_archivedMediaID;
    NSString *_originalMediaTypeString;
    long long _originalMediaType;
    long long _mediaGestureState;
    IGStoryCreationHighlightConfig *_highlightsConfig;
    NSArray *_prepopulatedStickers;
    IGStoryCreationAttributionModel *_attributionModel;
    NSString *_resharedMediaId;
    NSDictionary *_questionResponseMetadata;
    NSDictionary *_musicStickerMetadata;
    NSArray *_staticStickerMetadata;
    IGAudioOriginalSoundTrack *_originalSoundTrack;
    NSDictionary *_quizReshareStickerMetadata;
    NSDate *_shareTime;
    unsigned long long _multiPostMediaCount;
    unsigned long long _multiPostMediaIndex;
    IGMultiUploadMetadata *_multiUploadMetadata;
    long long _reshareSource;
    IGRingViewSpec *_customRingSpec;
    IGStoryRingBadgeSpec *_ringBadgeSpec;
    NSString *_createModeFormat;
    NSString *_createModeSubformat;
    long long _numPostcaptureTrims;
    NSString *_templateId;
    NSString *_waterfallId;
    NSDictionary *_formatTopLevelMetadata;
    NSString *_transcriptionText;
    NSString *_replyToMediaId;
    NSUUID *_compositionId;
    NSArray *_allowlistedUserIDs;
    long long _storyAttribution;
    NSDictionary *_gallerySuggestionsMetadata;
    NSString *_precaptureMusicAudioAssetId;
    NSString *_expressiveFormat;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *expressiveFormat; // @synthesize expressiveFormat=_expressiveFormat;
@property(copy, nonatomic) NSString *precaptureMusicAudioAssetId; // @synthesize precaptureMusicAudioAssetId=_precaptureMusicAudioAssetId;
@property(copy, nonatomic) NSDictionary *gallerySuggestionsMetadata; // @synthesize gallerySuggestionsMetadata=_gallerySuggestionsMetadata;
@property(nonatomic) long long storyAttribution; // @synthesize storyAttribution=_storyAttribution;
@property(copy, nonatomic) NSArray *allowlistedUserIDs; // @synthesize allowlistedUserIDs=_allowlistedUserIDs;
@property(copy, nonatomic) NSUUID *compositionId; // @synthesize compositionId=_compositionId;
@property(nonatomic) _Bool fromDrafts; // @synthesize fromDrafts=_fromDrafts;
@property(copy, nonatomic) NSString *replyToMediaId; // @synthesize replyToMediaId=_replyToMediaId;
@property(copy, nonatomic) NSString *transcriptionText; // @synthesize transcriptionText=_transcriptionText;
@property(copy, nonatomic) NSDictionary *formatTopLevelMetadata; // @synthesize formatTopLevelMetadata=_formatTopLevelMetadata;
@property(retain, nonatomic) NSString *waterfallId; // @synthesize waterfallId=_waterfallId;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(nonatomic) _Bool isCapturedInVideoChat; // @synthesize isCapturedInVideoChat=_isCapturedInVideoChat;
@property(nonatomic) long long numPostcaptureTrims; // @synthesize numPostcaptureTrims=_numPostcaptureTrims;
@property(nonatomic) _Bool isBoomerangV2; // @synthesize isBoomerangV2=_isBoomerangV2;
@property(copy, nonatomic) NSString *createModeSubformat; // @synthesize createModeSubformat=_createModeSubformat;
@property(copy, nonatomic) NSString *createModeFormat; // @synthesize createModeFormat=_createModeFormat;
@property(retain, nonatomic) IGStoryRingBadgeSpec *ringBadgeSpec; // @synthesize ringBadgeSpec=_ringBadgeSpec;
@property(retain, nonatomic) IGRingViewSpec *customRingSpec; // @synthesize customRingSpec=_customRingSpec;
@property(nonatomic) _Bool isPrideMedia; // @synthesize isPrideMedia=_isPrideMedia;
@property(nonatomic) long long reshareSource; // @synthesize reshareSource=_reshareSource;
@property(copy, nonatomic) IGMultiUploadMetadata *multiUploadMetadata; // @synthesize multiUploadMetadata=_multiUploadMetadata;
@property(nonatomic) _Bool isMentionReshare; // @synthesize isMentionReshare=_isMentionReshare;
@property(nonatomic) _Bool privateMentionShareEnabled; // @synthesize privateMentionShareEnabled=_privateMentionShareEnabled;
@property(nonatomic) unsigned long long multiPostMediaIndex; // @synthesize multiPostMediaIndex=_multiPostMediaIndex;
@property(nonatomic) unsigned long long multiPostMediaCount; // @synthesize multiPostMediaCount=_multiPostMediaCount;
@property(retain, nonatomic) NSDate *shareTime; // @synthesize shareTime=_shareTime;
@property(copy, nonatomic) NSDictionary *quizReshareStickerMetadata; // @synthesize quizReshareStickerMetadata=_quizReshareStickerMetadata;
@property(copy, nonatomic) IGAudioOriginalSoundTrack *originalSoundTrack; // @synthesize originalSoundTrack=_originalSoundTrack;
@property(copy, nonatomic) NSArray *staticStickerMetadata; // @synthesize staticStickerMetadata=_staticStickerMetadata;
@property(copy, nonatomic) NSDictionary *musicStickerMetadata; // @synthesize musicStickerMetadata=_musicStickerMetadata;
@property(copy, nonatomic) NSDictionary *questionResponseMetadata; // @synthesize questionResponseMetadata=_questionResponseMetadata;
@property(nonatomic) _Bool textModePostHasRainbowGradient; // @synthesize textModePostHasRainbowGradient=_textModePostHasRainbowGradient;
@property(nonatomic) _Bool shareToFacebook; // @synthesize shareToFacebook=_shareToFacebook;
@property(nonatomic) _Bool isResharedMediaIdOwnedByViewer; // @synthesize isResharedMediaIdOwnedByViewer=_isResharedMediaIdOwnedByViewer;
@property(copy, nonatomic) NSString *resharedMediaId; // @synthesize resharedMediaId=_resharedMediaId;
@property(copy, nonatomic) IGStoryCreationAttributionModel *attributionModel; // @synthesize attributionModel=_attributionModel;
@property(copy, nonatomic) NSArray *prepopulatedStickers; // @synthesize prepopulatedStickers=_prepopulatedStickers;
@property(retain, nonatomic) IGStoryCreationHighlightConfig *highlightsConfig; // @synthesize highlightsConfig=_highlightsConfig;
@property(nonatomic) _Bool hasAnimatedSticker; // @synthesize hasAnimatedSticker=_hasAnimatedSticker;
@property(nonatomic) long long mediaGestureState; // @synthesize mediaGestureState=_mediaGestureState;
@property(nonatomic) long long originalMediaType; // @synthesize originalMediaType=_originalMediaType;
@property(copy, nonatomic) NSString *originalMediaTypeString; // @synthesize originalMediaTypeString=_originalMediaTypeString;
@property(copy, nonatomic) NSString *archivedMediaID; // @synthesize archivedMediaID=_archivedMediaID;
@property(nonatomic) _Bool textModeBackgroundAlphaToggled; // @synthesize textModeBackgroundAlphaToggled=_textModeBackgroundAlphaToggled;
@property(nonatomic) _Bool textModeBackgroundColorToggled; // @synthesize textModeBackgroundColorToggled=_textModeBackgroundColorToggled;
@property(nonatomic) _Bool richTextCameraEnabled; // @synthesize richTextCameraEnabled=_richTextCameraEnabled;
@property(nonatomic) _Bool createdInRichTextMode; // @synthesize createdInRichTextMode=_createdInRichTextMode;
@property(nonatomic) _Bool allowBrandedContentPartnerToBoost; // @synthesize allowBrandedContentPartnerToBoost=_allowBrandedContentPartnerToBoost;
@property(retain, nonatomic) NSArray *geoGatingCountries; // @synthesize geoGatingCountries=_geoGatingCountries;
@property(retain, nonatomic) NSDictionary *ageGatingInfo; // @synthesize ageGatingInfo=_ageGatingInfo;
@property(nonatomic) _Bool isPaidPartnership; // @synthesize isPaidPartnership=_isPaidPartnership;
@property(copy, nonatomic) NSString *merchantID; // @synthesize merchantID=_merchantID;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(nonatomic) _Bool isAREffectInternalOnly; // @synthesize isAREffectInternalOnly=_isAREffectInternalOnly;
@property(copy, nonatomic) NSDictionary *selectedAREffectPersistedMetadata; // @synthesize selectedAREffectPersistedMetadata=_selectedAREffectPersistedMetadata;
@property(copy, nonatomic) NSString *selectedAREffectFileID; // @synthesize selectedAREffectFileID=_selectedAREffectFileID;
@property(copy, nonatomic) NSString *selectedAREffectID; // @synthesize selectedAREffectID=_selectedAREffectID;
@property(nonatomic) _Bool hasAREffect; // @synthesize hasAREffect=_hasAREffect;
@property(retain, nonatomic) NSSet *appliedAREffectInstanceIDsDuringPostcapture; // @synthesize appliedAREffectInstanceIDsDuringPostcapture=_appliedAREffectInstanceIDsDuringPostcapture;
@property(retain, nonatomic) NSSet *appliedAREffectIDsDuringPostcapture; // @synthesize appliedAREffectIDsDuringPostcapture=_appliedAREffectIDsDuringPostcapture;
@property(retain, nonatomic) NSSet *appliedAREffectInstanceIDsDuringRecording; // @synthesize appliedAREffectInstanceIDsDuringRecording=_appliedAREffectInstanceIDsDuringRecording;
@property(retain, nonatomic) NSSet *appliedAREffectIDsDuringRecording; // @synthesize appliedAREffectIDsDuringRecording=_appliedAREffectIDsDuringRecording;
@property(nonatomic) long long mediaAudience; // @synthesize mediaAudience=_mediaAudience;
@property(readonly, nonatomic) NSMutableOrderedSet *sponsorPartnerOrderedSet; // @synthesize sponsorPartnerOrderedSet=_sponsorPartnerOrderedSet;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSDictionary *arEffectIDs; // @synthesize arEffectIDs=_arEffectIDs;
@property(copy, nonatomic) NSArray *stickerIdsWithAttribution; // @synthesize stickerIdsWithAttribution=_stickerIdsWithAttribution;
@property(copy, nonatomic) NSArray *stickerIds; // @synthesize stickerIds=_stickerIds;
@property(copy, nonatomic) NSArray *internalFeatures; // @synthesize internalFeatures=_internalFeatures;
@property(copy, nonatomic) NSArray *storyLinks; // @synthesize storyLinks=_storyLinks;
@property(nonatomic) _Bool isMediaReplyOverlayTransformed; // @synthesize isMediaReplyOverlayTransformed=_isMediaReplyOverlayTransformed;
@property(nonatomic) long long mediaReplyOverlayStyle; // @synthesize mediaReplyOverlayStyle=_mediaReplyOverlayStyle;
@property(nonatomic) _Bool hasMediaReplyOverlay; // @synthesize hasMediaReplyOverlay=_hasMediaReplyOverlay;
@property(nonatomic) long long pinnedStickerCount; // @synthesize pinnedStickerCount=_pinnedStickerCount;
@property(nonatomic) long long mentionsCount; // @synthesize mentionsCount=_mentionsCount;
@property(nonatomic) _Bool mentionsTappable; // @synthesize mentionsTappable=_mentionsTappable;
@property(copy, nonatomic) NSArray *galleryStickerStyles; // @synthesize galleryStickerStyles=_galleryStickerStyles;
@property(copy, nonatomic) NSArray *textMetadataDictionaries; // @synthesize textMetadataDictionaries=_textMetadataDictionaries;
@property(copy, nonatomic) NSArray *richTextFormatLoggingNames; // @synthesize richTextFormatLoggingNames=_richTextFormatLoggingNames;
@property(copy, nonatomic) IGStoryTapModelArray *tapModelArray; // @synthesize tapModelArray=_tapModelArray;
@property(nonatomic) long long capturePosition; // @synthesize capturePosition=_capturePosition;
@property(readonly, nonatomic) long long contentTrait; // @synthesize contentTrait=_contentTrait;
@property(copy, nonatomic) NSString *formatVariant; // @synthesize formatVariant=_formatVariant;
@property(readonly, nonatomic) IGStoryCameraFormatModel *captureMode; // @synthesize captureMode=_captureMode;
@property(retain, nonatomic) IGStoryCreationEditsModel *creationEdits; // @synthesize creationEdits=_creationEdits;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(nonatomic) _Bool hasDrawing; // @synthesize hasDrawing=_hasDrawing;
@property(nonatomic) _Bool hasSeenTextInTombstonesNux; // @synthesize hasSeenTextInTombstonesNux=_hasSeenTextInTombstonesNux;
@property(copy, nonatomic) NSArray *metadataFromTextLabelStickers; // @synthesize metadataFromTextLabelStickers=_metadataFromTextLabelStickers;
@property(copy, nonatomic) NSArray *textFromTextLabelStickers; // @synthesize textFromTextLabelStickers=_textFromTextLabelStickers;
@property(readonly, nonatomic) _Bool hasBrandedContent;
- (id)initWithCaptureMode:(id)arg1 contentTrait:(long long)arg2;

@end

