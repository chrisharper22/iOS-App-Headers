//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGBugReportScreenshotAttachment, NSURL;

@interface IGBugReportMediaAttachmentType : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSURL *_videoURLAttachment;
    IGBugReportScreenshotAttachment *_screenshotAttachment;
}

+ (id)videoURLAttachment:(id)arg1;
+ (id)screenshotAttachment:(id)arg1;
- (void).cxx_destruct;
- (void)matchVideoURLAttachment:(CDUnknownBlockType)arg1 screenshotAttachment:(CDUnknownBlockType)arg2;

@end

