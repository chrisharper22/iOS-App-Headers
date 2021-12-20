//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGImageSpecifier, IGMedia, IGTVCreationAnalyticsSession, IGTVCreationEditAnalyticsSessionLogger;

@interface IGVideoShareSheetConfiguration : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGTVCreationAnalyticsSession *_uploadMode_creationAnalytics;
    IGTVCreationEditAnalyticsSessionLogger *_editMode_creationEditAnalytics;
    IGMedia *_editMode_media;
    IGImageSpecifier *_editMode_coverPhotoImageSpecifier;
}

+ (id)uploadModeWithCreationAnalytics:(id)arg1;
+ (id)editModeWithCreationEditAnalytics:(id)arg1 media:(id)arg2 coverPhotoImageSpecifier:(id)arg3;
- (void).cxx_destruct;
- (void)matchUploadMode:(CDUnknownBlockType)arg1 editMode:(CDUnknownBlockType)arg2;

@end

