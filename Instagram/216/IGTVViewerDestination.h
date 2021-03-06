//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGTVViewerFocusedComment;

@interface IGTVViewerDestination : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGTVViewerFocusedComment *_commentsSheet_initiallyFocusedComment;
}

+ (id)viewsAndLikesSheet;
+ (id)viewer;
+ (id)insightsSheet;
+ (id)directShareSheet;
+ (id)commentsSheetWithInitiallyFocusedComment:(id)arg1;
- (void).cxx_destruct;
- (void)matchCommentsSheet:(CDUnknownBlockType)arg1 directShareSheet:(CDUnknownBlockType)arg2 insightsSheet:(CDUnknownBlockType)arg3 viewer:(CDUnknownBlockType)arg4 viewsAndLikesSheet:(CDUnknownBlockType)arg5;
- (_Bool)matchBooleanCommentsSheet:(CDUnknownBlockType)arg1 directShareSheet:(CDUnknownBlockType)arg2 insightsSheet:(CDUnknownBlockType)arg3 viewer:(CDUnknownBlockType)arg4 viewsAndLikesSheet:(CDUnknownBlockType)arg5;

@end

