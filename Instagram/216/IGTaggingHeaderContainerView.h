//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGTagPeopleAddCollaboratorHeaderViewDelegate-Protocol.h"
#import "IGVideoTaggingAddItemHeaderViewDelegate-Protocol.h"

@class IGTagPeopleAddCollaboratorHeaderView, IGVideoTaggingAddItemHeaderView, IGVideoTaggingTagLimitHeaderView, NSString;
@protocol IGTaggingHeaderContainerViewDelegate;

@interface IGTaggingHeaderContainerView : UIView <IGTagPeopleAddCollaboratorHeaderViewDelegate, IGVideoTaggingAddItemHeaderViewDelegate>
{
    IGTagPeopleAddCollaboratorHeaderView *_tagPeopleAddCollaboratorHeaderView;
    IGVideoTaggingTagLimitHeaderView *_tagLimitHeaderView;
    IGVideoTaggingAddItemHeaderView *_addItemHeaderView;
    unsigned long long _type;
    id <IGTaggingHeaderContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTaggingHeaderContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addItemHeaderViewDidStartAddingTag:(id)arg1;
- (void)tagPeopleAddCollaboratorHeaderViewDidTapAddCollaborator:(id)arg1;
- (void)tagPeopleAddCollaboratorHeaderViewDidTapTagPeople:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)configureWithViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

