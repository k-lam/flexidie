/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "UITableViewCell.h"

@class CKBalloonView, UIButton;

@interface CKMessageCell : UITableViewCell
{
    CKBalloonView *_balloonView;
    UIButton *_failedButton;
    float _topPadding;
    float _bottomPadding;
    id _replacementMessageBubbleData;
}

+ (id)_exclamationGlyphImage;
+ (id)_failImage;
+ (id)_failPressedImage;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_multiselectBackgroundColor;
- (void)addBalloonView:(id)arg1;
- (void)setFailed:(BOOL)arg1;
- (void)setTopPadding:(float)arg1 bottomPadding:(float)arg2;
- (void)_failPressed:(id)arg1;
- (void)didTapBalloon:(id)arg1;
- (void)_resetBalloonFrame;
- (void)prepareForReuse;
@property(retain, nonatomic) id replacementMessageBubbleData; // @synthesize replacementMessageBubbleData=_replacementMessageBubbleData;
@property(readonly, nonatomic) CKBalloonView *balloonView; // @synthesize balloonView=_balloonView;

@end

