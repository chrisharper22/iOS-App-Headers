//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGActionRowSectionControllerDelegate-Protocol.h"
#import "IGHeadlineSectionControllerDelegate-Protocol.h"
#import "IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h"

@class IGProInspirationSectionModel, NSDictionary, NSString;
@protocol IGProInspirationSectionControllerDelegate;

@interface IGProInspirationSectionController : NSObject <IGHeadlineSectionControllerDelegate, IGMediaThumbnailSectionControllerSelectionDelegate, IGActionRowSectionControllerDelegate>
{
    IGProInspirationSectionModel *_sectionModel;
    NSDictionary *_mediaIdToIndexMap;
    id <IGProInspirationSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGProInspirationSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionRowSectionControllerDidTapActionButton:(id)arg1 viewModel:(id)arg2;
- (void)didSelectFeedItem:(id)arg1 usingForceTouch:(_Bool)arg2;
- (void)headlineSectionControllerDidTapButton:(id)arg1 viewModel:(id)arg2;
- (id)initWithSectionModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

