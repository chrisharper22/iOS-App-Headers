//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyCollectionViewCell.h>

@class IGStoryMusicModelsListViewController, IGSundialInspirationHubSavedAudioSectionModel;

@interface IGSundialInspirationHubSavedAudioCell : IGBouncyCollectionViewCell
{
    IGSundialInspirationHubSavedAudioSectionModel *_model;
    IGStoryMusicModelsListViewController *_musicListViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryMusicModelsListViewController *musicListViewController; // @synthesize musicListViewController=_musicListViewController;
- (void)_setupViewForUser:(id)arg1;
- (void)updateWithModel:(id)arg1 userSession:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

