//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

#import "IGStoryViewerEntryView-Protocol.h"

@class IGProfilePhotoView, NSString;

@interface IGUnifiedVideoModernProfilePictureButton : IGBouncyButton <IGStoryViewerEntryView>
{
    IGProfilePhotoView *_profilePhotoView;
}

- (void).cxx_destruct;
- (void)setLoading:(_Bool)arg1;
- (id)previewImageView;
- (id)profilePicture;
- (_Bool)isDisplayingStoryRing;
- (struct CGRect)profilePictureFrame;
- (void)configureWithUser:(id)arg1 storyRingSpec:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

