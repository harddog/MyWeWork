//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIImageView, UILabel, WWKSplashSeperatorView;

@interface SplashViewController : UIViewController
{
    UILabel *_companyNameLabel;
    UIImageView *_companyLogoView;
    WWKSplashSeperatorView *_seperatorView;
    UIImageView *_beta;
    UIImageView *_backGroundView;
    UIImageView *_bottomImageView;
}

@property(retain, nonatomic) UIImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) UIImageView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(retain, nonatomic) UIImageView *beta; // @synthesize beta=_beta;
@property(retain, nonatomic) WWKSplashSeperatorView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(retain, nonatomic) UIImageView *companyLogoView; // @synthesize companyLogoView=_companyLogoView;
@property(retain, nonatomic) UILabel *companyNameLabel; // @synthesize companyNameLabel=_companyNameLabel;
- (void).cxx_destruct;
- (void)homeImageViewTap:(id)arg1;
- (void)initSubViews;
- (void)initCustomSubViews;
- (void)viewWillLayoutSubviews;
- (void)setViewsAlpha:(double)arg1;
- (void)viewDidLoad;

@end
